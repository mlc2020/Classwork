# By submitting this assignment, I agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Name: 		Mihir Chadaga
# Section:		102-504
# Assignment:	Lab 3b-Program 3
# Date:		11 September 2018

from math import *

iParameter = float(input("What is the initial rate parameter of the decline? "))
dParameter = float(input("What is the decline rate of the decline? "))
Constant = float(input("What is the hyperbolic constant of the decline? "))
Time = float(input("What is the time elapsed of the decline? "))

print(iParameter/((1+Constant*dParameter*Time)**(1/Constant)))