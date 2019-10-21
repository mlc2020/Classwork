# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Christopher Tran
# 	        	Mihir Chadaga
# 	        	Justin Arackel
#             	Kaushal Jishnu Gajula
#			    Aidan Cormier
# Section:    	102-504
# Assignment: 	Lab 9 Storing Data
# Date:       	29 October 2018

fileName = input("Enter the file name to which you want your data stored: ")
indVar = input("Enter in the name of your independent variable: ")
depVar = input("Enter in the name of your dependent variable: ")

print("To stop entering in values, type \"STOP\" for the value of", indVar, ".")

xValues = []
yValues = []

while 0 == 0:
    xVal = input("Enter in a value for " + str(indVar) + ": ")

    if xVal.lower() == "stop":
        break
    else:
        xVal = float(xVal)

    yVal = float(input("Enter in the corresponding value for " + str(depVar) + ": "))

    xValues.append(xVal)
    yValues.append(yVal)

fileN = str(fileName) + ".txt"

file = open(fileN, "w+")

file.write(str(indVar) + ",")
for i in range(len(xValues)):
    file.write(str(xValues[i]) + ",")

file.write("\n")

file.write(str(depVar) + ",")
for i in range(len(yValues)):
    file.write(str(yValues[i]) + ",")