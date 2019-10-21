# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 10b - Part 2
# Date:       	11 12 2018

import matplotlib.pyplot as plt
from numpy import histogram
with open("WeatherDataWindows.csv", "r") as fileRead:
    contains_everything = []
    for line in fileRead:
        dates = line.split(",")
        contains_everything.append(dates)
    contains_everything.pop(0)
    print(contains_everything)
    daily_avg_pressure = []
    days = []
    daily_avg_temp = []
    precipitation = []
    dew_point = []
    month_avg = []
    all_month_averages = []
    for i in contains_everything:
        days.append(i[0])
        daily_avg_pressure.append(float(i[11]))
        daily_avg_temp.append(float(i[2]))
        precipitation.append(float(i[-1]))
        dew_point.append(float(i[5]))
    for j in range(len(precipitation) - 1, -1, -1):
        if precipitation[j] == 0 or precipitation[j] >= 0.5:
            del precipitation[j]
print(all_month_averages)
average_temp = plt.subplot()
average_temp.plot(days[:19], daily_avg_temp[:19], "powderblue")
average_temp.set_xlabel("Date")
average_temp.set_ylabel("Temperature", color="powderblue")
average_pressure = average_temp.twinx()
average_pressure.plot(days[:19], daily_avg_pressure[:19], "palevioletred")
average_pressure.set_ylabel("Pressure", color="palevioletred")
plt.show()
plt.hist(precipitation, bins="auto", color="darksalmon")
plt.show()
plt.scatter(daily_avg_temp, dew_point, color="mediumspringgreen")
plt.xlabel("Avg. Temperature")
plt.ylabel("Avg. Dew Point")
plt.show()
plt.bar(days, all_month_averages)
plt.show()