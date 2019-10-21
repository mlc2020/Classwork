# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Kaushal Gajula
# 	        	Aidan Cormier
# 	        	Justin Arackel
#             	Christopher Tran
# 	            Mihir Chadaga
# Section:    	102-504
# Assignment: 	LAB 11 Activity 2a
# Date:       	11/12/2018


def findans(lgX, lgY, smX, smY, query):
    slope = (lgY - smY) / (lgX - smX)
    b = lgY - slope * lgX
    y = slope * query + b
    return y


fileName = input("Enter in the file with the data: ")
dataFile = open(fileName + ".txt", "r")

xVals = []
yVals = []
for line in dataFile:
    bothVals = line.split(" ")
    y_conversion = str.strip(bothVals[1], '\n')
    xVals.append(int(bothVals[0]))
    yVals.append(int(bothVals[1]))

queryVal = float(input("Enter in the value you want to query: "))

largestX = max(xVals)
largestY = 0
smallestX = min(xVals)
smallestY = 0

for index in range(len(xVals)):
    if largestX == xVals[index]:
        largestY = yVals[index]
    if smallestX == xVals[index]:
        smallestY = yVals[index]

answer = findans(largestX, largestY, smallestX, smallestY, queryVal)
print("The value at", queryVal, "is", answer)
