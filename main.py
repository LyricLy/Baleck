import ball
import copy
import sys
import json
import pygame
import math

from collections import defaultdict
from network import Network
from pos_vec import Position, Vector
from track import Track


class Game:
    def __init__(self, display, nets, track):
        self.display = display
        self.draw = True
        self.track = track
        self.balls = []
        self.survived = defaultdict(int)
        for net in nets:
            self.balls.append(ball.AI(net, self, track.start.copy()))

    def run(self):
        clock = pygame.time.Clock()
        fitnesses = defaultdict(int)
        laps = defaultdict(int)
        ray = -6
        counter = 0

        while True:
            self.display.fill((0, 255, 40))

            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    sys.exit(0)
                elif event.type == pygame.KEYDOWN:
                    if event.key == 100:
                        self.draw = not self.draw

            for b in self.balls:
                if b.enabled:
                    b.draw((0, 0, 0))
            self.track.draw(self.display)
            for b in self.balls:
                if b.enabled:
                    b.step()

            if counter % 10 == 0:
                for b in self.balls:
                    if b.enabled:
                        self.survived[b] += 1
                        f = self.track.fitness(b)
                        if f - fitnesses[b] < -350:
                            laps[b] += 360
                        elif f - fitnesses[b] > 350:
                            laps[b] -= 360
                        fitnesses[b] = f
                        if laps[b] + f < ray:
                            b.enabled = False
            ray += 0.2

            if self.draw:
                p1 = self.track.center
                p2 = self.track.center + Vector.from_angle(math.radians(ray) + self.track.start_angle, 1280)
                pygame.draw.line(self.display, (255, 0, 0), (p1.x, p1.y), (p2.x, p2.y), 2)

            counter += 1

            pygame.display.flip()
            if self.draw:
                clock.tick(60)

            if not any(b.enabled for b in self.balls):
                break

    def get_fitness(self, ball):
        return self.survived[ball]


with open(sys.argv[1]) as t:
    track = Track(json.load(t))

display = pygame.display.set_mode((1280, 720))
pool = [Network(10, [6, 3]) for _ in range(100)]
draw_default = True

while True:
    game = Game(display, pool, track)
    game.draw = draw_default
    game.run()
    draw_default = game.draw
    game.balls.sort(key=game.get_fitness, reverse=True)
    pool = [b.net for b in game.balls]
    del pool[50:]
    new_nets = []
    for good_net in pool:
        new_nets.append(good_net.mutated())
    pool.extend(new_nets)
