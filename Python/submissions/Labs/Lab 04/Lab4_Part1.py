# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Kaushal Gajula
# 	        	Aidan Cormier
# 	        	Justin Arackel
#             	Christopher Tran
#		Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 4 - Part 1
# Date:       	19 09 2018

from math import *
TOLS = 0.001
#First Instruction
print("First Instruction:")
a=1/7
print(a)
b=a*7
print(b)

#Second Instruction
print("\nSecond Instruction:")
a=1/7
print(a)
b=7*a
print(b)
c=2*a
d=5*a
e=c+d
print(e)

#Third Instruction
print("\nThird Instruction:")
x = sqrt(1/3)
print(x)
y = x*x*3
print(y)
z = x*3*x
print(z)
print("Is", y, "within tolerance of", z, "?", fabs(y-z) < TOLS)

#Example 1
print("\nExample 1:")
x = sqrt(1/5)
print(x)
y = x*x*5
print(y)
z = x*5*x
print(z)
print("Is", y, "the same as", z, "?", x==y)
print("Is", y, "within tolerance of", z, "?", fabs(y-z) < TOLS)

#Example 2
print("\nExample 2:")
a=1/9
print(a)
b=9*a
print(b)
c=2*a
d=7*a
e=c+d
print(e)
print("Is", b, "the same as", e, "?", b==e)
print("Is", b, "within tolerance of", e, "?", fabs(b-e) < TOLS)


#Example 3
print("\nExample 3:")
x = sqrt(sqrt(7))
print(x)
y = x**2**2
print (y)
z = (x*x)*(x*x)
print (z)
print("Is", y, "the same as", z, "?", x==y)
print("Is", y, "within tolerance of", z, "?", fabs(z-y) < TOLS)

#Example 4
print("\nExample 4:")
x = pi
print(x)
y = sin(x)
print(y)
y = y*2
z = asin(y/2)
print(z)
equalsto = x == z
print("Is", x, "the same as", z, "?", equalsto)
print("Is", x, "within tolerance of", z, "?", fabs(x-z) < TOLS)

#Example 5
print("\nExample 5:")
x=pi**2
print(x)
y=sqrt(x)
print(y)
z=sqrt(pi)
a=z**2
print(a)
print("Is " + str(y) + " the same as " + str(a) + "?", a==z)
print("Is " + str(y) + " within tolerance of " + str(a) + "?", fabs(a-y) < TOLS)

#Example 6
print("\nExample 6:")
E = e
y = sqrt(e)
print(y)
x = y**2
print(x)
print(e)
W = e == x
print("Is", E, "the same as", x, "?",e==x)
print("Is", E, "within tolerance of", x, "?", fabs(E-x) < TOLS)

#Example 7
print("\nExample 7:")
x = 1
y = 2
a = (x+y)/10
print(a)
b = (x/10) + (y/10)
print(b)
print("Is", a, "the same as", b, "?", a==b)
print("Is", a, "within tolerance of", b, "?", fabs(a-b) < TOLS)

#Example 8
print("\nExample 8:")
Y =15
x = exp(Y)
print(x)
y = log1p(x)
print(y)
print("Is", Y, "the same as", y, "?", y==Y)
print("Is", Y, "within tolerance of", y, "?", fabs(y-Y) < TOLS)