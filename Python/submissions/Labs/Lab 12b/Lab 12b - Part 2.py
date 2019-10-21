# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 12b - Part B
# Date:       	11 29 2018

import turtle

x = -370
y = 310


def individual_tally():
    """Draws a tally"""
    global x
    turtle.penup()
    turtle.setx(x)
    turtle.sety(y)
    turtle.pendown()
    turtle.fd(30)
    turtle.penup()
    x += 10


def group_5_tally():
    """Draws a 5 tally"""
    global x
    individual_tally()
    individual_tally()
    individual_tally()
    individual_tally()
    turtle.penup()
    turtle.sety(y)
    turtle.pendown()
    turtle.rt(45)
    turtle.fd(43)
    turtle.rt(-45)
    turtle.penup()
    x += 10


def line_break():
    """Makes a line break"""
    global x
    global y
    x = -370
    y -= 50


number = int(input("Number you would like to tally? "))
turtle.pensize(5)
turtle.rt(90)
for i in range(number // 25 + 1):
    for j in range(min(25, (number - (i * 25))) // 5):
        group_5_tally()
    for k in range(min(25, (number - (i * 25))) % 5):
        individual_tally()
    line_break()
turtle.done()
