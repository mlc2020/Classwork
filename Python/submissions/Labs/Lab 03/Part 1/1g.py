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
valinvolts=input("enter value for voltage to find power gain convert into decibel volts")
valinvolts=float(valinvolts)
powergain=valinvolts/1
valinDBV=20*log(powergain,10)
print(valinDBV)