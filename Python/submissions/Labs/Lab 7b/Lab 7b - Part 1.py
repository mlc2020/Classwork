# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 7b - Part 1
# Date:       	08 10 2018

vowels = ["a", "e", "i", "o", "u"]

word = input("What is your word? ")
while word != "stop":
    if word[0] in vowels:
        word += "yay"
    else:
        word = word[1:] + word[0] + "ay"
    print(word)
    word = input("What is your word? ")
