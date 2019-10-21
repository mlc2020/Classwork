# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 9b - Part 2
# Date:       	11 04 2018

loan_amount = float(input("What was the loan amount? "))
annual_interest = float(input("What is the annual interest rate? "))
monthly_payment = float(input("What is the amount paid monthly? "))
filename = input("What would you like the file name to be? ")

with open(filename + ".csv", "w") as fileWrite:
    fileWrite.write("Month" + "," + "Interest" + "," + "Loan Remaining" + "\n")
    fileWrite.write("0" + "," + "0" + "," + str(loan_amount) + "\n")
    month = 1
    interest = 0
    while loan_amount > 0 and month <= 30:
        interest = interest + (loan_amount * (annual_interest/12))
        loan_amount = (loan_amount - monthly_payment) + (loan_amount * (annual_interest/12))
        if loan_amount < 0:
            fileWrite.write(str(month) + "," + str(interest) + "," + "0" + "\n")
        else:
            fileWrite.write(str(month) + "," + str(interest) + "," + str(loan_amount) + "\n")
            month += 1