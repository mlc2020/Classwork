# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 9b - Part 1
# Date:       	11 04 2018

with open("Celsius.dat", "r") as fileRead:
    celsius_val = []

    for line in fileRead:
        celsius_val.append(float(line))

    fahrenheit_val = []
    for i in celsius_val:
        fahrenheit = (i * 9/5) + 32
        fahrenheit_val.append(fahrenheit)

with open("Fahrenheit.dat", "w") as fileWrite:
    for x in fahrenheit_val:
        fileWrite.write(str(x) + "\n")