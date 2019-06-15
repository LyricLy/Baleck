import copy
import pygame

from network import Network, Node
from pos_vec import Position, Vector


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
        if self.game.track.hit(self.game.display, self.pos):
            self.enabled = False

        fx, fy, power = self.net.evaluate([
            self.vec.x,
            self.vec.y
        ])

        power = min(max(power, 0), 0.1)

        self.vec += (Vector.from_angle(Vector(fx, fy).angle, power))

        self.move(0.01)
