#ifndef STUDENT_H
#define STUDENT_H

#include <fstream>
#include <map>
#include <string>
#include <vector>

/*

This class represents a Student.



It contains the student's details
(first name, last name, id, and enrolled courses). This information
is stored in private variables.

The class contains the following public methods:
        1. a dropCourse method that accepts the student id and course number
           and drops the student from that course.
        2. a addCourse method that accepts the student id and course number
           and adds the student to that course.
        3. an inCourse method that accepts the student id and course number
           and checks if the student is in that course.

*/

/*

When the addCourse method of the EnrollmentSystem class is called, the addCourse
method of the Student class is called. The method will accept the student id and
the course number in which the student must be added to.

*/

using namespace std;

// forward declaration
class Course;

class Student {
  friend class Course;
  friend class University;
  friend class EnrollmentSystem;
  friend ostream &operator<<(ostream &out, const Student &student);

private:
  string first_Name;
  string last_Name;
  int id;
  vector<Course *> enrolled_Courses;
};

public:
Student(string first_Name, string last_Name, int id);
Student(const Student &other);
ostream &operator<<(ostream &out, const Student &student);
bool dropCourse(int studentID, const string &courseNumber);
bool addCourse(int studentID, const string &courseNumber);
bool isInCourse(int studentID, const string &courseNumber) const;
}
;

#endif