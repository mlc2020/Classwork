# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 9b - Part 3
# Date:       	11 04 2018

with open("WeatherDataWindows.csv", "r") as fileRead:
    contains_everything = []
    for line in fileRead:
        dates = line.split(",")
        contains_everything.append(dates)
    contains_everything.pop(0)
    print(contains_everything)
    maximum = -1000000
    minimum = 1000000
    pressure_maximum = -1000000
    pressure_minimum = 1000000
    daily_precip = []
    avg_max = []
    number_90 = 0
    increase = 0
    decrease = 0
    for i in contains_everything:
        temp_maxi = int(i[1])
        temp_mini = int(i[3])
        pressure_maxi = float(i[10])
        pressure_mini = float(i[12])
        if temp_maxi > maximum:
            maximum = temp_maxi
        if temp_mini < minimum:
            minimum = temp_mini
        if pressure_maxi > pressure_maximum:
            pressure_maximum = pressure_maxi
        if pressure_mini < pressure_minimum:
            pressure_minimum = pressure_mini
        daily_precip.append(float(i[-1]))
        if "/2015" and "7/" in i[0]:
            avg_max.append(int(i[1]))
        if int(i[8]) >= 90:
            number_90 += 1
    print("Maximum value = " + str(maximum))
    print("Minimum value = " + str(minimum))
    avg_precip = sum(daily_precip)/len(daily_precip)
    month_avg_max = sum(avg_max)/len(avg_max)
    print("Avg precip = " + str(avg_precip))
    print("Avg high temp in July 2015 = " + str(month_avg_max))
    print("Number of times humidity was over 90% = " + str(number_90))
    print("Maximum pressure= " + str(pressure_maximum))
    print("Minimum pressure= " + str(pressure_minimum))
