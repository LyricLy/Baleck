import math
import pygame
import sys
import json


size = (1280, 720)
display = pygame.display.set_mode(size)
points = []
start_point = 0, 0
center_point = 0, 0
pushed_last_frame = False

while True:
    display.fill((0, 255, 30))

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            sys.exit(0)
        elif event.type == pygame.KEYDOWN:
            if event.key == 115:
                with open(sys.argv[1], "w") as f:
                    data = [start_point, center_point, points]
                    json.dump(data, f)
            elif event.key == 108:
                with open(sys.argv[1]) as f:
                    start_point, center_point, points = json.load(f)
            elif event.key == 99:
                points = []
            elif event.key == 122:
                start_point = pygame.mouse.get_pos()
            elif event.key == 120:
                center_point = pygame.mouse.get_pos()

    if pygame.mouse.get_pressed()[0]:
        if not pushed_last_frame:
            points.append([])
        mx, my = pygame.mouse.get_pos()
        any_points = False
        for point in points[-1]:
            px, py = point
            if (mx - px) ** 2 + (my - py) ** 2 < ((5 * 15) ** 2):
                any_points = True
        if not any_points:
            points[-1].append((mx, my))
        pushed_last_frame = True
    else:
        pushed_last_frame = False

    for point_list in points:
        if len(point_list) > 1:
            pygame.draw.aalines(display, (0, 0, 0), False, point_list, 2)
    pygame.draw.circle(display, (255, 0, 0), start_point, 5)
    pygame.draw.circle(display, (0, 0, 255), center_point, 5)

    pygame.display.flip()
