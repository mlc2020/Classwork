# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 11b - Part C
# Date:       	11 19 2018

name = input("Name? ")
city = input("City? ")
state = input("State? ")
zip_code = int(input("zip code? "))
address_1 = input("address 1? ")
address_2 = input("address 2? ")


def mail(n, c, s, zc, a1, a2):
    return print(n), print(c, s, zc), print(a1), print(a2)


mail_label = mail(name, city, state, zip_code, address_1, address_2)
print(mail_label)
