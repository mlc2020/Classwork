# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Kaushal Gajula
# 	        	Aidan Cormier
# 	        	Justin Arackel
#             	Christopher Tran
# 	            Mihir Chadaga
# Section:    	504
# Assignment: 	LAB 11
# Date:       	11/12/2018
from math import *
a = 1E-6
b = -1E-6
# Part A


def func(x):
    y = x**2 - 16
    return y
# Part B


def derivative(function_a, var):

    function2 = function_a(var)
    function1 = function_a(var+a)
    limit = (function1 - function2)/a
    return limit


def newton_step(x):
    estimate = x - (func(x)/derivative(func, x))
    return estimate


def newton(x):
    m = []
    m.append(x)
    calc = 100
    while not (b < calc < a):
        temp = m[-1]
        m.append(newton_step(temp))
        calc = m[-1] - temp
    return m


w = float(input("Guess a root for the function f(x) = x^2 - 16: "))
print('f(', w, ') = ', func(w))
print('f\'(', w, ') = ', derivative(func, w))
print('Root Estimates: ', newton(w))
