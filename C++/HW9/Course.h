#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Date.h"
#include "AttendanceRecord.h"

class Course {
  std::string id;
  std::string title;
  Date startTime = Date(0,0,0);
  Date endTime = Date(0,0,0);
  std::vector<AttendanceRecord> attendanceRecords;

public:
  Course(std::string ID, std::string TITLE, Date STARTTIME, Date ENDTIME);
  std::string getID() {return id;}
  std::string getTitle() {return title;}
  Date getStartTime() {return startTime;}
  Date getEndTime() {return endTime;}
  void addAttendanceRecord(AttendanceRecord ar);
  void outputAttendance();
  void outputAttendance(std::string student_id);
};

#endif