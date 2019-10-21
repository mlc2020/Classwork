# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 4b - Part 3
# Date:       	27 09 2018

CLDimension = float(input("What is the characteristic linear dimension? "))
Fluid_Velocity = float(input("What is the fluid velocity? "))
Fluid_Viscosity = float(input("What is the fluid viscosity? "))
Reynolds_Number = Fluid_Velocity * CLDimension/ Fluid_Viscosity
if Reynolds_Number > 4000:
    print("The system is turbulent.")
elif Reynolds_Number > 2300:
    print("The system is transient.")
else:
    print("The system is laminar.")

print("https://www.engineeringtoolbox.com/laminar-transitional-turbulent-flow-d_577.html")