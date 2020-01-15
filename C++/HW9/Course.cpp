#include <iostream>
#include <fstream>
#include <string>
#include "Course.h"
#include "Date.h"
#include "AttendanceRecord.h"

using namespace std;

Course::Course(std::string ID, std::string TITLE, Date STARTTIME, Date ENDTIME) {
    id = ID;
    title = TITLE;
    this -> startTime = STARTTIME;
    this -> endTime = ENDTIME;
}

void Course::addAttendanceRecord(AttendanceRecord ar) {
//    cout << ar.getDate().getDate() << endl;
//    cout << this ->getID() << " " << this -> getTitle() << endl;
    if (ar.getDate() <= endTime && ar.getDate() >= startTime) {
        attendanceRecords.push_back(ar);
//        for (auto record: attendanceRecords) {
//            cout << record.getDate().getDate() << endl << "-------------" << endl;
//        }
//        cout << "**************************" << endl;
//        cout << attendanceRecords.size() << endl;
    }
}

void Course::outputAttendance() {
    if (attendanceRecords.empty()) {
        cout << "No Records" << endl;
    } else {
        for (auto attendancerecord: attendanceRecords) {
            cout << attendancerecord.getDate().getDate() << "," << attendancerecord.getCourseID() << "," << attendancerecord.getStudentID() << endl;
        }
    }
}

void Course::outputAttendance(std::string student_id) {
    if (attendanceRecords.empty()) {
        cout << "No Records" << endl;
    } else {
        bool oopsies = false;
        for (size_t i = 0; i < attendanceRecords.size(); ++i) {
            if (attendanceRecords.at(i).getStudentID() == student_id) {
                oopsies = true;
                cout << attendanceRecords.at(i).getDate().getDate() << "," << attendanceRecords.at(i).getCourseID() << "," << attendanceRecords.at(i).getStudentID() << endl;
            }
        }
        if (!oopsies) {
            cout << "No Records" << endl;
        }
    }
}