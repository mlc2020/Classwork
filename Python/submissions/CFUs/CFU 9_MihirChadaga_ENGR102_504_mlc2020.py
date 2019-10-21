from math import *


def polar_conversion(r, theta):
    x = r * cos(theta)
    y = r * sin(theta)
    return x, y


r_input = int(input("What r value would you like the polar coordinate to have (r,theta)? "))
theta_input = int(input("What angle should the polar coordinate have in degrees (r,theta)? "))
answer = polar_conversion(r_input, theta_input)
print(answer)