import ball
import copy
import sys
import json
import pygame

from collections import defaultdict
from network import Network
from pos_vec import Position
from track import Track


class Game:
    def __init__(self, display, nets, track):
        self.display = display
        self.draw = True
        self.track = track
        self.balls = []
        self.fitnesses = defaultdict(int)
        self.laps = defaultdict(int)
        for net in nets:
            self.balls.append(ball.AI(net, self, track.start.copy()))

    def run(self, count):
        clock = pygame.time.Clock()
        for _ in range(count):
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

            for b in self.balls:
                if b.enabled:
                    f = self.track.fitness(b)
                    if f - self.fitnesses[b] > 6000:
                        self.laps[b] += 1
                    elif f - self.fitnesses[b] < -6000:
                        self.laps[b] -= 1
                    self.fitnesses[b] = f

            if self.draw:
                pygame.display.flip()
                clock.tick(60)

            if not any(b.enabled for b in self.balls):
                break

    def get_fitness(self, ball):
        return self.laps[ball] * 6283 + self.fitnesses[ball]


with open(sys.argv[1]) as t:
    track = Track(json.load(t))

display = pygame.display.set_mode((1280, 720))
pool = [Network(2, [6, 3]) for _ in range(100)]

while True:
    game = Game(display, pool, track)
    game.run(120)
    print(game.fitnesses)
    game.balls.sort(key=game.get_fitness, reverse=False)
    pool = [b.net for b in game.balls]
    del pool[50:]
    new_nets = []
    for good_net in pool:
        new_nets.append(good_net.mutated())
    pool.extend(new_nets)
