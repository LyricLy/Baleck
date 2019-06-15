import copy
import pygame
import math
import time

from network import Network, Node
from pos_vec import Position, Vector
from intersect import intersect


class Ball:
    def __init__(self, game, pos, vec=None, radius=5):
        self.game = game
        self.pos = pos
        self.vec = vec or Vector(0, 0)
        self.radius = radius

    def move(self, friction):
        self.pos.move(self.vec)
        self.vec = Vector.from_angle(self.vec.angle, max(self.vec.magnitude - friction, 0))

    def draw(self, colour):
        if self.game.draw:
            pygame.draw.circle(self.game.display,
                               colour,
                               (int(self.pos.x), int(self.pos.y)),
                               self.radius)


class AI(Ball):
    def __init__(self, net, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.net = net
        self.enabled = True

    def step(self):
        CHECK_RANGE = 100
        results = [1] * 8

        point_lists = []
        for point_list in self.game.track.point_lists:
            new_list = []
            for x, y in point_list:
                if (self.pos.x - CHECK_RANGE <= x <= self.pos.x + CHECK_RANGE
                and self.pos.y - CHECK_RANGE <= y <= self.pos.y + CHECK_RANGE):
                    new_list.append(Position(x, y))
            point_lists.append(new_list)

        for ri, d in enumerate(range(0, 360, 360 // 8)):
            for point_list in point_lists:
                for i in range(len(point_list) - 1):
                    args = self.pos, self.pos + Vector.from_angle(math.radians(d) + self.vec.angle, CHECK_RANGE), point_list[i], point_list[i+1]
                    r = intersect(*args)
                    if r:
                        results[ri] = self.pos.distance(r) / CHECK_RANGE
                        break

        fx, fy, power = self.net.evaluate([
            self.vec.x,
            self.vec.y,
            *results
        ])

        power = min(max(power, 0), 0.1)
        self.vec += (Vector.from_angle(Vector(fx, fy).angle, power))

        if self.game.track.hit(self.game.display, self.pos):
            self.enabled = False
        else:
            self.move(0.01)
