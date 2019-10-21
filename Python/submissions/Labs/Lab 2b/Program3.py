# By submitting this assignment, I agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Name: 		Mihir Chadaga
# Section:		102-504
# Assignment:	Lab 2b-Program 3
# Date:		11 September 2018

#Program 3:
x=1
z=0
z+=x
print(z)
#This gives the value one for variable z when run.
x+=1
z+=x
print(z)
#This gives the value three for variable z when printed.
x=1
z=0
z+=x
y=10
z+=y
print(z)
#This gives the value eleven for z when printed.
y+=x
x+=1
x+=1
y+=x
y+=x
z+=y
print(z)
#This gives the value twenty eight for variable z when run.
x+=1
x+=1
y*=x
x=y
y=10
y+=x
z+=y
print(z)
#This gives the value one hundred twenty three for variable z when run.
y=10
x=y
y*=x
x=y
y*=x
x=y
y*=x
x=y
y*=x
x=y
y*=x
z=0
z+=y
print(z)
#This is the value 10^32 given by the variable z.
y=10
x=1
z=0
x+=1
y*=x
x+=1
y*=x
x+=1
x+=1
x+=1
x+=1
x+=1
y*=x
x+=1
y*=x
x=1
z+=x
z+=y
print(z)
#This gives the value 4321 for the variable z.