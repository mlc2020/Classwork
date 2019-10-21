# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 6b - Part 1
# Date:       	08 10 2018

i = int(input("What is the starting number? "))
print(i)  # prints the starting number (the first number in the series)
n = 0  # counter for iterations
while i != 1:
    if i % 2 == 0:
        i = i/2
        n += 1
        print(int(i))
    else:  # all numbers not divisible by 2 fall in this category
        i = 3*i + 1
        n += 1
        print(int(i))
print("Iterations:", n)
