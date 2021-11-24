#ifndef COURSE_H
#define COURSE_H

#include "Student.hpp"

class Course
{
private:
string cname;
int credits;
string semester;
vector<Student> student;
static int NUM_COURSES = 0;

public:
Course();
Course(string,int,string,vector<Student>);

string getCName();
int getCredit();
string getSemester();
vector<Student> getStudents();
void setCourse(string,int,string,vector<Student>);
void addStudent(Student &s);
int getNumCourses();

friend ostream &operator << (ostream &, const Course &);
friend istream &operator >> (istream &, const Course &);


};


#endif


