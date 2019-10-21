# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 7b - Part 2
# Date:       	08 10 2018

from math import sqrt

while True:
    dimensions = int(input("Number of dimensions? "))
    if dimensions > 0:
        break
    print("Invalid dimensions given")
vector_A = []
vector_B = []

for x in range(1, dimensions + 1):
    vector_A.append(float(input("Dimension " + str(x) + " of Vector A? ")))
    vector_B.append(float(input("Dimension " + str(x) + " of Vector B? ")))

vector_sum = 0
for x in range(dimensions):
    vector_sum += vector_A[x] ** 2
print("Magnitude of Vector A", sqrt(vector_sum))

vector_sum = 0
for x in range(dimensions):
    vector_sum += vector_B[x] ** 2
print("Magnitude of Vector B", sqrt(vector_sum))

A_plus_B = []
for x in range(dimensions):
    A_plus_B.append(vector_A[x] + vector_B[x])
print("A + B: ", A_plus_B)

A_min_B = []
for x in range(dimensions):
    A_min_B.append(vector_A[x] - vector_B[x])
print("A - B: ", A_min_B)

dotP = 0
for x in range(dimensions):
    dotP += vector_A[x] * vector_B[x]
print("Dot product of A and B: ", dotP)