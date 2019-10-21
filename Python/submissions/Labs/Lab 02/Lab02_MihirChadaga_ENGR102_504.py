# Racetrack Program
# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:
#           Justin Arackel
# 	 		 Christopher Tran
# 	 		  Mihir Chadaga
#             Kaushal Gajula
#               Aidan Cormier
# Section:		102-504
# Assignment:	Lab 02
# Date:		05 September 2018
from math import *

Initial_Position = 50.0
Final_Position = 615.0
Initial_Time = 30.0
Final_Time = 45.0
Delta_Time = Final_Time - Initial_Time
Displacement = Final_Position - Initial_Position
Velocity = Displacement/Delta_Time
Circumference = pi*1000
Desired_Time = input("Time to Check:")
Position_Function = Velocity * int(Desired_Time) - 1080
Position_Function = int(Position_Function)
while Position_Function >= Circumference:
    Position_Function = int(Position_Function - Circumference)

print('The car is ' + str(Position_Function) + ' meters past the starting point at time ' + str(Desired_Time) + ' seconds')

# If you run the program for the desired time of 20 minutes, the output is 132 meters.
# If you run the program for the desired time of 37 seconds, the output is 313 meters.