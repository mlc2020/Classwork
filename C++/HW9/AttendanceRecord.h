#ifndef ATTENDANCERECORD_H
#define ATTENDANCERECORD_H

#include <string>
#include "Date.h"

class AttendanceRecord {
  std::string course_id;
  std::string student_id;
  Date time = Date(0,0,0);

public:
  AttendanceRecord(std::string course_id, std::string student_id, Date time);
  std::string getCourseID() {return course_id;}
  std::string getStudentID() {return student_id;}
  Date getDate() {return time;}
};

#endif