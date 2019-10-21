# By submitting this assignment, I agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Name: 		Mihir Chadaga
# Section:		102-504
# Assignment:	Lab 3b-Program 2
# Date:		11 September 2018

from math import *

XPosObs = float(input("x position of observer: "))
YPosObs = float(input("y position of observer: "))
ZPosObs = float(input("z position of observer: "))
XPosOne = float(input("x position of first observed point: "))
YPosOne = float(input("y position of first observed point: "))
ZPosOne = float(input("z position of first observed point: "))
XPosTwo = float(input("x position of second observed point: "))
YPosTwo = float(input("y position of second observed point: "))
ZPosTwo = float(input("z position of second observed point: "))

VectorOne = [XPosOne - XPosObs, YPosOne - YPosObs, ZPosOne - ZPosObs]
VectorTwo = [XPosTwo - XPosObs, YPosTwo - YPosObs, ZPosTwo - ZPosObs]
Normalize1 = sqrt(VectorOne[0]**2 + VectorOne[1]**2 + VectorOne[2]**2)
Normalize2 = sqrt(VectorTwo[0]**2 + VectorTwo[1]**2 + VectorTwo[2]**2)
Dot_Product = VectorOne[0]*VectorTwo[0] + VectorOne[1]*VectorTwo[1] + VectorOne[2]*VectorTwo[2]
Angle = acos(Dot_Product/Normalize1/Normalize2)
print(Angle/pi*180)