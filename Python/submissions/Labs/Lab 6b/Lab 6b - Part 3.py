# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 6b - Part 3
# Date:       	10 10 2018

for y in range(2, 101):
    for x in range(2, y + 1):
        if y % x == 0:  # prints if x divides y without remainders
            print(y, "divides", x)
