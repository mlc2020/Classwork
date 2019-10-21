# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 11b - Part E
# Date:       	11 19 2018


given_list = input("What is the list you wish to input (separated by commas)? ") .split(",")
floated_list = []
for i in range(len(given_list)):
    floated_list.append(float(given_list[i]))


def identify (function_list):
    minimum = min(function_list)
    maximum = max(function_list)
    mean_list = sum(floated_list)/len(floated_list)
    return minimum, maximum, mean_list


identified_list = identify(given_list)
print(identified_list)
