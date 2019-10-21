# By submitting this assignment, I agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Name: 		Mihir Chadaga
# Section:		102-504
# Assignment:	Lab 2b-Program 2a
# Date:		11 September 2018

Thirteen_XVal = 1
Thirteen_YVal = 3
Thirteen_ZVal = 7
EightyFour_XVal = 23
EightyFour_YVal = -5
EightyFour_ZVal = 10
Initial_Time = 13
Final_Time = 84
Delta_Time = Final_Time-Initial_Time
Delta_XPosition = EightyFour_XVal-Thirteen_XVal
Delta_YPosition = EightyFour_YVal-Thirteen_YVal
Delta_ZPosition = EightyFour_ZVal-Thirteen_ZVal

for Input_Time in [20, 27.5, 35, 43.5, 50]:
    Input_XPosition = (Delta_XPosition / Delta_Time) * (Input_Time - Initial_Time) + Thirteen_XVal
    Input_YPosition = (Delta_YPosition / Delta_Time) * (Input_Time - Initial_Time) + Thirteen_YVal
    Input_ZPosition = (Delta_ZPosition / Delta_Time) * (Input_Time - Initial_Time) + Thirteen_ZVal
    print(Input_XPosition)
    print(Input_YPosition)
    print(Input_ZPosition)
    print("------------------")
