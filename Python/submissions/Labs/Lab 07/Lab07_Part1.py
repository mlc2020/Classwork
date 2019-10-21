# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Kaushal Gajula
# 	        	Aidan Cormier
# 	        	Justin Arackel
#             	Christopher Tran
#		        Mihir Chadaga
# Section:    	504
# Assignment: 	LAB 7 Activity 1
# Date:       	08 10 2018

data = 0
widgetProduction = []

while data >= 0:
    data = int(input("Enter in the production number of widgets(enter a negative number to stop): "))
    widgetProduction.append(data)

widgetProduction.remove(data)

for interval in range(len(widgetProduction)-1):
    increasing = 0
    decreasing = 0
    count = 0

    for y in range(len(widgetProduction)-interval-1):

        if y+interval+1 < len(widgetProduction):
            dif = widgetProduction[y+interval+1]-widgetProduction[y]
        if dif == 0:
            count += 1
        elif dif < 0:
            decreasing += 1
            count += 1
        elif dif > 0:
            increasing += 1
            count += 1

    increasingPercent = (increasing/count)*100
    decreasingPercent = (decreasing/count)*100

    print("\nFor "+str(interval+1)+"- day intervals "+"%.1f" % increasingPercent + "% were increasing and "+"%.1f"
          % decreasingPercent + "% were decreasing")





