# By submitting this assignment, I agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Name: 		Mihir Chadaga
# Section:		102-504
# Assignment:	Lab 3b-Program 2
# Date:		11 September 2018

from math import *

Cohesion = float(input("What is the apparent cohesion of the system? "))
Normal_Stress = float(input("What is the normal stress of the system? "))
Angle= float(input("What is the angle of internal friction of the system? "))
Shear_Stress = Cohesion * Normal_Stress * tan(Angle)
print(Shear_Stress)