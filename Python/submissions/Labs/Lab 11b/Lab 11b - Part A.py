# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 11b - Part A
# Date:       	11 19 2018

from math import *

r = float(input("radius of hole? "))
l = float(input("length of block? "))
w = float(input("width of block? "))
h = float(input("height of block? "))


def volume_remaining(radius, length, width, height):
    cylinder = height * pi * radius**2
    volume = length * width * height
    return volume - cylinder


volume_input = volume_remaining(r, l, w, h)
print(volume_input)
