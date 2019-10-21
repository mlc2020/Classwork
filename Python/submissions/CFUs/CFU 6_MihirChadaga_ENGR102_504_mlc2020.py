Temperatures = open(Temperature.dat)
WeeklyData = open(WeeklyAverages.dat, "w")
values = []
i = 0
j = 0
line = Temperatures.read()
for j in range(len(line)):  # the idea was to have this iterate for the length of the line with j having a value assigned after every 7th value so no value iterates twice
    for i in range(i , i+j):  # so for range(7) this works, but after that I made the program to go from i = 8 to i = 8 + 7 (which is what is added to the value of j which was previously 0)
        values.append(line[i])
        i += 1
    average = sum(values) / len(values)
    WeeklyData.write(str(average))
    j += 7
