# By submitting this assignment, I agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Name: 		Mihir Chadaga
# Section:		102-504
# Assignment:	CFU 2
# Date:		1 October 2018

Name = input("What is your name? ")
TestScore1 = float(input("What is your first test score? "))
TestScore2 = float(input("What is your second test score? "))
TestScore3 = float(input("What is your third test score? "))
#The lines above ask the user for their name and 3 of their test scores.
AvgTestScore = (TestScore1 + TestScore2 + TestScore3) / 3
#The user's average test score is each of the scores added up and divided by the number of scores, in this case 3.

print("Hey, " + Name + "! Your average test score is " + str(AvgTestScore))