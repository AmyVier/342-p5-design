#ifndef COURSE_H
#define COURSE_H

#include <fstream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// forward declaration
class Student;

class Course {
  friend class Student;
  friend class University;
  friend class EnrollmentSystem;
  friend ostream &operator<<(ostream &out, const Course &course);

public:
  void addStudent(int studentID);       // add student to list
  void removeStudent(int studentID);    // remove student from list
  vector<Student *> getStudentListID(); // return sorted list of students by ID
  vector<Student *> getStudentListLastName(); // return sorted list of
                                              // students by last name

private:
  string name;                // name of course
  vector<Student *> students; // list of students (sorted)
};

#endif