# By submitting this assignment, I agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Name: 		Mihir Chadaga
# Section:		102-504
# Assignment:	Lab 3b-Program 1
# Date:		11 September 2018

from math import *

Mass_object = float(input("What is the mass of the object? "))
Velocity_object = float(input("What is the velocity of the object? "))
Kinetic_energy = (1/2) * Mass_object * (Velocity_object**2)
print('The object has a kinetic energy of ' + str(int(Kinetic_energy)))