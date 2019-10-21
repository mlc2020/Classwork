entered_number = int(input("What number do you want to input? "))
initial_entered = entered_number
factorial = 1
if entered_number == 0:
    print("0 factorial is defined as 0 times 1 and is thus just 0")
elif entered_number < 0:
    print("error, negative")
else:
    while entered_number > 0:
        factorial *= entered_number
        entered_number -= 1
    print(str(initial_entered) + "! has the value " + str(factorial))

entered_number = int(input("What number do you want to input? "))