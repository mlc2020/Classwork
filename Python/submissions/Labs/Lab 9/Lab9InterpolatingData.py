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
# Assignment: 	Lab 9 Reading Data
# Date:       	29 October 2018

fileName = input("Enter in the file you would like to read: ")

fileN = str(fileName) + ".txt"

file1 = open(fileN, "r")

file2 = file1.readlines()
lines = []

for line in file2:
    lines.append(line)

indVals = lines[0].split(",")
depVals = lines[1].split(",")

indVals.pop()
depVals.pop()

xVarName = indVals[0]
del indVals[0]
yVarName = depVals[0]
del depVals[0]

m = (float(depVals[1])-float(depVals[0]))/(float(indVals[1])-float(indVals[0]))
b = float(depVals[0]) - m*float(indVals[0])
while 0 == 0:
    print("Enter in \"STOP\" to stop.")
    a = input("Enter in the " + str(xVarName) + " which you want to interpolate " + str(yVarName) + ": ")
    if a.lower() == "stop":
        break
    a = float(a)
    w = m*a + b
    print("For", xVarName, ': ', a, "you get", w, "for the ", yVarName, ".")
