# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 5b
# Date:       	27 09 2018

strain = float(input("What is the strain of the object? "))

# Endpoints below have "coordinate" values of (strain, stress)
# A has estimated point of (.015, 42)
# B has estimated point of (.03, 42)
# C has estimated point of (.06, 42)
# D has estimated point of (.18, 60)
# E has estimated point of (.27, 50)


if 0 <= strain < .015:
    stress = 2800 * strain
    print("Given inputted strain of " + str(strain) + " the stress of the object is " + str(stress))
# stress outputted if strain inputted is between the x-coordinates of 0 and A.
# This is the linear elastic region with Young's Modulus, 2800 (slope of equation found).

elif .015 <= strain < .06:
    stress = 42
    print("Given inputted strain of " + str(strain) + " the stress of the object is " + str(stress))
# stress outputted if strain inputted is between the x-coordinates of A and C.
# This combines the portions A to B and B to C because for the intents of this 4 line model, A to C remains constant.

elif .06 <= strain < .18:
    stress = 150 * strain + 33
    print("Given inputted strain of " + str(strain) + " the stress of the object is " + str(stress))
# stress outputted if strain inputted is between the x-coordinates of C and D.
# This is the straight hardening portion up to maximum strength,D.

elif .18 <= strain <= .27:
    stress = (-10/.09) * strain + 80
    print("Given inputted strain of " + str(strain) + " the stress of the object is " + str(stress))
# stress outputted if strain inputted is between the x-coordinates of D and E.
# This is the necking portion to the fracture point, E.

else:
    print("Strain is outside domain of curve given.")
