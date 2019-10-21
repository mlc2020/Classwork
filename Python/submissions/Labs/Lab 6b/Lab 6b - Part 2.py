# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 6b - Part 2
# Date:       	10 10 2018

array_for_mean = []
while True:
    number_entered = int(input("What value do you want to add (add a negative when finished adding)? "))
    if number_entered < 0:  # breaks loop for a negative value
        break
    array_for_mean.append(number_entered)  # if not broken, appends value


mean = sum(array_for_mean)/len(array_for_mean)
print(mean)

print(max(array_for_mean))
print(min(array_for_mean))
