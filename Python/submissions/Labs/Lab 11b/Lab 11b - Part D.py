# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 11b - Part D
# Date:       	11 19 2018

file_in = input("please input the name of the file: ") + ".csv"


def operation(file_name):
    file_obj = open(file_name, "r")
    file_write = open("tabbed_file.csv", "w+")
    for i in file_obj:
        temp_string = ""
        o_string = ""
        i = i.split(",")
        for j in i:
            temp_string += j + "\t"
        o_string = o_string + (temp_string + "\n")
    file_write.write(o_string)
    file_write.close()
    file_obj.close()
    return "success"


execute = operation(file_in)
print(execute)
