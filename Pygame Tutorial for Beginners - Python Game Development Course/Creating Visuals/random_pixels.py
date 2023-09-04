import pygame
from pygame.locals import *
from sys import exit
from random import randint
pygame.init()
screen = pygame.display.set_mode((1200, 960), FULLSCREEN, 32)
while True:
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()
    rand_col = (randint(0, 255), randint(0, 255), randint(0, 255))
    for _ in range(100000):
        rand_pos = (randint(0, 1199), randint(0, 959))
        screen.set_at(rand_pos, rand_col)
    pygame.display.update()
