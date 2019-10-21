# By submitting this assignment, I agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Name: 		Mihir Chadaga
# Section:		102-504
# Assignment:	Lab 3b-Program 4
# Date:		11 September 2018

from math import *

Arrival_Rate = float(input("What is the arrival rate in the queue? "))
Service_Rate = float(input("What is the service rate of the queue? "))
print(Arrival_Rate/(Service_Rate - Arrival_Rate))