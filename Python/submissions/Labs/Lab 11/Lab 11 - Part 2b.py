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


def find_ans(lgX, lgY, smX, smY, query):
    slope = (lgY - smY) / (lgX - smX)
    b = lgY - slope * lgX
    y = slope * query + b
    return y


fileName = input("Enter in the file with the data: ")
dataFile = open(fileName+'.dat', "r")
dimension_n = int(input('enter the number of dimensions,(<5)'))
xVals = []
yVals = []
for j in range(dimension_n-1):
    for line in dataFile:
        both_lines = line.split(' ')
        xVals.append(int(both_lines[0]))
        k = 1
        yVector = []
        while k <= dimension_n:
            yVector.append(int(both_lines[k]))
            k += 1
        yVals.append(yVector)

largestX = max(xVals)
largestY = 0
smallestX = min(xVals)
smallestY = 0
answers = []
for index in range(len(xVals)):
    if largestX == xVals[index]:
            largestY = yVals[index]
    if smallestX == xVals[index]:
            smallestY = yVals[index]
query_Val = float(input("Value to check? "))
each_dimension = 0
while each_dimension < dimension_n:
    yVal_dimension_large = largestY[each_dimension]
    yVal_dimension_small = smallestY[each_dimension]
    find_ans(largestX, yVal_dimension_large, smallestX, yVal_dimension_small, query_Val)
    answers.append(find_ans(largestX, yVal_dimension_large, smallestX, yVal_dimension_small, query_Val))
    each_dimension += 1

print("The linear interpolation of the data at " + str(query_Val) + " with " + str(dimension_n) + " dimensions, takes the values ", end="")
print(answers)
