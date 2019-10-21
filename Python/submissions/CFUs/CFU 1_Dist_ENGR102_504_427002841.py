#Mihir Chadaga
from math import *

radius_given = 3.21
area_circle = pi*(radius_given**2)
#This gives the area of the circle.
circumference = pi * 2 * radius_given
#This gives the circumference of the circle.
print(area_circle)
print(circumference)

side_length = sqrt(area_circle)
#The side length of a square times itself gives the area therefore the square root of the area found previously gives 1 side length of the square.
print(side_length)

side_length = circumference/4
#Similarly, the side length of a square is 1/4th of its "circumference" or perimeter in this case. Therefore, the previously found circumference divided by 4 gives 1 side length.
print(side_length)