#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <iomanip>
#include "School.h"
#include "AttendanceRecord.h"

using namespace std;

void School::addStudents(string filename) {
  ifstream ifs(filename);
  if (!ifs.is_open()) {
    cout << "Unable to open file: " << filename << endl;
    return;
  }
  while (!ifs.eof()) {
    string line;
    getline(ifs, line);
    istringstream ss(line);
    string uin;
    getline(ss, uin, ',');
    string name;
    getline(ss, name);
    if (!ss.fail()) {
      students.push_back(Student(uin, name));
    }
  }
}

void School::listStudents() {
    if (students.empty()) {
        std::cout << "No Students" << endl;
    } else {
        for (auto student: students) {
            std::cout << student.get_id() << "," << student.get_name() << std::endl;
        }
    }
}

void School::addCourses(std::string filename) {
    ifstream ifs(filename);
    if(!ifs.is_open()) {
        std::cout << "Unable to open file: " << filename << endl;
        return;
    }
    while (!ifs.eof()) {
        string line;
        getline(ifs, line);
        istringstream ss(line);
        if (!line.empty()) {
            string courseId;
            getline(ss, courseId, ',');
            string startHour;
            getline(ss, startHour, ':');
            string startMinute;
            getline(ss, startMinute, ',');
            string endHour;
            getline(ss, endHour, ':');
            string endMinute;
            getline(ss, endMinute, ',');
            string title;
            getline(ss, title);
            auto startt = Date(stoi(startHour), stoi(startMinute), 0);
            auto endt = Date(stoi(endHour), stoi(endMinute), 0);
            if (!ss.fail()) {
                courses.push_back(Course(courseId, title, startt, endt));
            }
        }
    }
}

void School::listCourses() {
    if (courses.empty()) {
        std::cout << "No Courses" << std::endl;
    } else {
        for (auto course: courses) {
            std::cout << course.getID() << ",";
            printf("%02d", course.getStartTime().getHour());
            cout << ":";
            printf("%02d",course.getStartTime().getMin());
            cout << ",";
            printf("%02d", course.getEndTime().getHour());
            cout << ":";
            printf("%02d", course.getEndTime().getMin());
            cout << "," << course.getTitle() << endl;
        }
    }
}

void School::addAttendanceData(std::string filename) {
    ifstream ifs(filename);
    if (!ifs.is_open()) {
        cout << "Unable to open file: " << filename << endl;
        return;
    }
    while (!ifs.eof()) {
        string line;
        getline(ifs, line);
        istringstream ss(line);
        if (!line.empty()) {
            string year;
            getline(ss, year, '-');
//            cout << "Year: " << stoi(year) << endl;
            string month;
            getline(ss, month, '-');
//            cout << "Month: " << stoi(month) << endl;
            string day;
            getline(ss, day, ' ');
//            cout << "Day: " << stoi(day) << endl;
            string hour;
            getline(ss, hour, ':');
//            cout << "Hour: " << stoi(hour) << endl;
            string minute;
            getline(ss, minute, ':');
//            cout << "Minute: " << stoi(minute) << endl;
            string second;
            getline(ss, second, ',');
//            cout << "Second: " << stoi(second) << endl;
            string courseID;
            getline(ss, courseID, ',');
            string uin;
            getline(ss, uin);
            Date attendence_time = Date(stoi(year), stoi(month), stoi(day), stoi(hour), stoi(minute), stoi(second));
            auto attendanceobject = AttendanceRecord(courseID, uin, attendence_time);
            if (!ss.fail()) {
                for (size_t i = 0; i < courses.size(); ++i) {
                    if (courseID == courses.at(i).getID()) {
                        courses.at(i).addAttendanceRecord(attendanceobject);
                    }
                }
            }
        }
    }
}

void School::outputCourseAttendance(std::string course_id) {
    for(auto course: courses) {
        if (course_id == course.getID()) {
            course.outputAttendance();
        }
    }
}

void School::outputStudentAttendance(std::string student_id, std::string course_id){
    for(auto course: courses) {
        if (course_id == course.getID()) {
            course.outputAttendance(student_id);
        }
    }
}