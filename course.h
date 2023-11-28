#ifndef COURSE_H
#define COURSE_H

#include <fstream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// forward declaration
class Student;

// Object class course holds a list of students currently in the course
class Course {
  friend class Student;
  friend class University;
  friend class EnrollmentSystem;
  friend ostream &operator<<(ostream &out, const Course &course);

public:
  Course(string name = "no name");            // constructor
  Course(const Course &other);                // copy constructor
  virtual ~Course();                          // destructor
  void addStudent(const Student &student);    // add student to list
  bool removeStudent(const Student &student); // remove student from list
  vector<Student *> getStudentListID(); // return sorted list of students by ID
  vector<Student *> getStudentListLastName(); // return sorted list of
                                              // students by last name

private:
  string name;                // name of course
  vector<Student *> students; // list of students (unsorted)
};

#endif