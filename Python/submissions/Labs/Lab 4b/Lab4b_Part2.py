# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 4b - Part 2
# Date:       	27 09 2018

Height = float(input("What is the height (in meters)? "))
Weight = float(input("What is the weight (in kg)? "))
BMI = Weight/(Height**2)
if BMI < 18.5:
    print("Underweight")
elif 18.5 <= BMI <= 24.9:
    print("Normal")
elif 25.0 <= BMI <= 29.9:
    print("Overweight")
elif 30 <= BMI:
    print("Obese")