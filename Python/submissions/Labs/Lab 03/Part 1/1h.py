# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Kaushal Gajula
# 	        	Aidan Cormier
# 	        	Justin Arackel
#             	Christopher Tran
#			Mihir Chadaga
# Section:    	504
# Assignment: 	LAB 3
# Date:       	12 09 2018

from math import *
print("enter two richter scale values to convert into a ratio of energy released in the two earthquakes")
richterscaleval1=float(input())
richterscaleval2=float(input())
powerratio=pow(10,(1.44*(log(richterscaleval1/richterscaleval2,10))))
print(powerratio)


