part_1_array = []  # uh tbh idk what this part means so this is my best shot at trying to understand lol
part_1_array.append("Mihir_Sort_in_list_ENGR102_504.py")
print(part_1_array)

feet = int(input("Height of object in feet (without remainder inches)?: "))  # Asks for the feet measurement of height
inches = int(input("What are the remaining inches of the height? "))  # Asks for the remaining inches after feet is inputted

height_array = []  # Empty list that will be appended with height values in cm
while not (feet == 0 and inches == 0):  # Loop will exit if 0 feet 0 inches is given value
    feet_to_cm = feet * 12 * 2.54  # conversion of feet to cm
    inches_to_cm = inches * 2.54  # conversion of remaining inches to cm
    full_cm = feet_to_cm + inches_to_cm  # adds cm values obtained from feet and from inches for one value
    height_array.append(str(full_cm))  # appends full value of height in inches to the list
    feet = int(input("Height of object in feet (without remainder inches)?: "))
    inches = int(input("What are the remaining inches of the height? "))
    # Loop repeats until value 0 feet and 0 inches is given
print(height_array)  # prints the list of converted values in order as inputted

# i understood this part tho lol
