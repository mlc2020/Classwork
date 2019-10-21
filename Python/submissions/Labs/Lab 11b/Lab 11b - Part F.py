# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 11b - Part F
# Date:       	11 19 2018


time = input("Time list (separated by commas): ").split(",")
distance = input("Distance list (separated by commas): ").split(",")
floated_time = []
floated_distance = []
for j in range(len(time)):
    floated_time.append(float(time[j]))
    floated_distance.append(float(distance[j]))


def velocity(t, p):
    vel = []
    for i in range(1, len(t)):
        vel.append((p[i] - p[i-1]) / (t[i] - t[i - 1]))
    return vel


answer = velocity(time, distance)
print(answer)