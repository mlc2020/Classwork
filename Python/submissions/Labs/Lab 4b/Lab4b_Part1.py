# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 4b - Part 1
# Date:       	27 09 2018

Number1 = int(input("What is your first number? "))
Number2 = int(input("What is your second number? "))
Number3 = int(input("What is your third number? "))

if (Number3 and Number2) < Number1:
    print("Number 1 is the largest")
elif (Number1 and Number3) < Number2:
    print("Number 2 is the largest")
elif (Number2 and Number1) < Number3:
    print("Number 3 is the largest")
else:
    print("Error in inputs")