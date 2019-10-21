# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 4 - Part 2
# Date:       	19 09 2018

from math import *

a = input("Is a true? (yes or no): ") == "yes"
b = input("Is b true? (yes or no): ") == "yes"
c = input("Is c true? (yes or no): ") == "yes"

print("1:", a and b and c)
print("2:", a or b or c)
print("3:", (not (a and not b) or (not c and b)) and (not b) or (not a and b and not c) or (a and not b))
print("4:", (not ((b or not c) and (not a or not c))) or (not (c or not (b and c))) or (a and not c) and (not a or (a and b and c) or (a and ((b and not c) or (not b)))))
print("5:", a ^ b)
print("6:", (a and b and c) or (a and not b and not c) or (not a and b and not c) or (not a and not b and c))

BL = [[True, True, True], [True,True,False], [True,False,True],[False,True,True],[False,False,False],[False,False,True],[False,True,False],[True,False,False]]
for i in range(0,8):
    a = BL[i][0]
    b = BL[i][1]
    c = BL[i][2]
    print("3:", (not (a and not b) or (not c and b)) and (not b) or (not a and b and not c) or (a and not b))
    print("7:", (not a and not c) or not b)
for i in range(0,8):
    a = BL[i][0]
    b = BL[i][1]
    c = BL[i][2]
    print("4:", (not ((b or not c) and (not a or not c))) or (not (c or not (b and c))) or (a and not c) and (not a or (a and b and c) or (a and ((b and not c) or (not b)))))
    print("8:", (not b and c) or a)