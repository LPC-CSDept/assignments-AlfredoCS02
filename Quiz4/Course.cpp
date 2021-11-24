#include "Course.hpp"

Course::Course(){

}
Course::Course(string n,int c,string s,vector<Student> st){
cname = n;
credits = c;
semester = s;
student = st;
}

void Course::setCourse(string n,int c,string s,vector<Student> st){
cname = n;
credits = c;
semester = s;
student = st;
}

string Course::getCName(){
return cname;
}
int Course::getCredit(){
return credits;
}
string Course::getSemester(){
return semester;
}
vector<Student> Course::getStudents(){
return student;
}

void addStudent(Student &s){

}
int getNumCourses(){

}

ostream &operator<<(ostream &os, const Course &course){

}
istream &operator>>(istream &is, const Course &course){

}