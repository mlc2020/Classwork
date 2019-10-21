# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 4b - Part 4
# Date:       	27 09 2018

from math import *

print("ax^2+bx+c=0")
a = float(input("What is the value of the coefficient a in the equation above? "))
b= float(input("What is the value of the coefficient b in the equation above? "))
c = float(input("What is the value of the coefficient c in the equation above? "))

roots = []

if a == 0 and b != 0:
    roots.append(-1* c / b)
elif a==0 and b == 0 and c!= 0:
    roots.append("DNE")
elif a == 0 and b == 0 and c == 0:
    roots.append("All real numbers")
elif a != 0 and b**2 - 4* a * c > 0:
    roots.append((-1 * b + sqrt(b**2 - 4 * a * c))/(2 * a))
    roots.append((-1 * b - sqrt(b ** 2 - 4 * a * c)) / (2 * a))
elif a != 0 and b**2 - 4 * a * c < 0:
    roots.append(str((-1 * b) / (2 * a)) + "+" + str(sqrt(abs(b**2 - 4 * a * c)) / (2 * a)) + "i")
    roots.append(str((-1 * b) / (2 * a)) + "-" + str(sqrt(abs(b ** 2 - 4 * a * c)) / (2 * a)) + "i")

for x_root in roots:
    print(x_root)