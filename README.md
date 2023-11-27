# Student Enrollment System Overview
Designed by Tim Huynh, Gopalcharan Pal, Govind Pal, Amy Vier.

The Student Enrollment System manages course registration at any university.

The data required for system to function is course data, enrollment data, and student data.

The system takes data from text file using the following format:

-----------------------------
    Course Data:
    Course1 CourseName1
    Course2 CourseName2
-----------------------------
    Enrollment Data:
    ClassId CourseName1
-----------------------------
    Student Data:
    StudentID Name1
    
Student can register for course and drop the course if wanted. 

The University can access the course data and student data.

## University Class Description
This class is responsible for managing and manipulating course and student data for the active university. It offers a multitude of methods to get information about the classes offered and the students studying in various formats.

The name of the university, as well as the students and courses, are stored as private variables (specifically, the name as a string and the students and courses as vectors).

The University class offers one constructor which takes in a string to initialize the name of the university.

Additionally, the class implements a destructor which will remove all associated data (e.g. student and course data) from the university in addition to the object itself.

The following methods are offered in the University class:
1. bool readStudentList(const string &filename)
    * This method attempts to read a list of students at the university based on the given file name. If the file is found and the list is read successfully, the method returns true, and false otherwise.
2. bool readCourseList(const string &filename)
    * This method attempts to read a list of courses at the university based on the given file name. If the file is found and the list is read successfully, the method returns true, and false otherwise.
3. bool readEnrollmentInfo(const string &filename)
    * This method returns enrollment information at the university given a file name. If the file is found and the read is successful, the method returns true, and false otherwise.
4. bool dropCourse(int studentID, const string &courseNumber)
    * This method attempts to drop a course from the university's offered courses, and returns true if the operation was successful, and false otherwise.
5. bool addCourse(int studentID, const string &courseNumber)
    * This method attempts to add a course to the university's offered courses, and returns true if the operation was successful, and false otherwise.
6. bool isInCourse(int studentID, const string &courseNumber) const
    * This method returns true if the specified student is enrolled in the specified class, and false otherwise.
7. string getEnrolledCourses(int studentID) const
    * This method returns a string contaning all the courses of a specified student. 
8. string getCourseTitle(const string &courseNumber)
    * This method returns the title for a given course specified by course ID.
9. string getClassListByLastName(const string &courseNumber) const
    * This method returns all of the students in a given course, sorted by last name of the students.
10. string getClassListByID(const string &courseNumber) const
    * This method returns all of the students in a given course, sorted by the course number.

## Course

## Student
