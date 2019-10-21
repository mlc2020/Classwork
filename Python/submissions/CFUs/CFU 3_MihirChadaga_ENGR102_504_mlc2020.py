Exam_Score = int(input("What was your exam score? "))
HW_Score = int(input("What was your HW score? "))
Project = input("Did you do the project (yes or no)? ")
if Project == "yes":
    if Exam_Score*.6 + HW_Score*.4 + 5 >= 90:
        print("The student receives an A")
    elif 80 <= Exam_Score * .6 + HW_Score * .4 + 5 < 90:
        print("The student receives a B")
    elif 70 <= Exam_Score * .6 + HW_Score * .4 + 5 < 80:
        print("The student receives a C")
    elif 60 <= Exam_Score * .6 + HW_Score * .4 + 5 < 70:
        print("The student receives a D")
    else:
        print("The student receives an F")
if Project != "yes":
    if Exam_Score*.6 + HW_Score*.4 >= 80:
        print("The student receives a B")
    elif 70 <= Exam_Score * .6 + HW_Score * .4 < 80:
        print("The student receives a C")
    elif 60 <= Exam_Score * .6 + HW_Score * .4 < 70:
        print("The student receives a D")
    else:
        print("The student receives an F")