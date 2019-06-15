import pygame

from pos_vec import Position


class Track:
    def __init__(self, track_data):
        start, center, points = track_data
        self.start = Position(*start)
        self.center = Position(*center)
        self.start_angle = (self.start - self.center).angle
        self.point_lists = points
        self.points = [Position(*point) for point_list in points for point in point_list]

    def hit(self, display, position):
        try:
            r = display.get_at((int(position.x), int(position.y)))
            return r != (0, 0, 0, 255)
        except IndexError:
            return True

    def draw(self, display):
        for point_list in self.point_lists:
            if len(point_list) > 1:
                pygame.draw.lines(display, (100, 100, 100), False, point_list, 5)

    def fitness(self, ball):
        return -int(((self.start_angle - (ball.pos - self.center).angle) + 3.141) * 1000)
