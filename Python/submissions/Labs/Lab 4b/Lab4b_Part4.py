# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 4b - Part 4
# Date:       	27 09 2018

from math import *

day = int(input("What day is in question? "))
widgets = 0
if day <= 10:
    widgets += day * 10
    print(widgets)
elif 11 <= day <= 60:
    widgets += 100 + (40 * (day - 10))
    print(widgets)
elif 61 <= day <= 100:
    widgets += 2100 + floor(.5 * (day-60) * (40 + (40 - (day - 60))))
    print(widgets)
else:
    widgets += 2260
    print(widgets)