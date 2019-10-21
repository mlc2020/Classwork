# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 10b - Part 1
# Date:       	11 12 2018

import numpy
import matplotlib.pyplot as plt
starting_matrix = numpy.matrix([[1.00583, -0.087156], [0.087156, 1.00583]])
print(starting_matrix)
point_matrix = numpy.matrix([[1], [0]])
print(point_matrix)
point_array = numpy.array(point_matrix)
point_python = point_array.tolist()
print(point_python)
x = []
y = []
x.append(point_python[0])
print(x)
y.append(point_python[1])
print(y)
for n in range(174):
    point_matrix = numpy.matmul(starting_matrix, point_matrix)
    point_array = numpy.array(point_matrix)
    point_python = point_array.tolist()
    print(point_python)
    x.append(point_python[0])
    y.append(point_python[1])
plt.plot(x, y)
plt.show()
