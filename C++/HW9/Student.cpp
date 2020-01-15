#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Student.h"

using namespace std;

Student::Student(std::string student_id, std::string newname) {
    id = student_id;
    name = newname;
}

std::string Student::get_id() {
    return id;
};
std::string Student::get_name() {
    return name;
}

void Student::addCourse(std::string course_id) {
    course_ids.push_back(course_id);
}