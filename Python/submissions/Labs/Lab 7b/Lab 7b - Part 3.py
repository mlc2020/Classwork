# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 7b - Part 3
# Date:       	08 10 2018

number = int(input("Number of username / password pairs: "))
password_keys = {}
for x in range(number):
    username = input("Username of user " + str(x) + ": ")
    password = input("Password of user " + str(x) + ": ")
    password_keys[username] = password

while True:
    user_guess = input("Username? ")
    password_guess = input("Password? ")
    if password_keys.get(user_guess) == password_guess:
        print("Successfully logged in")
        break
    else:
        print("Login unverified")
