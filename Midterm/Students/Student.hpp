#ifndef STUDENT_H
#define STUDENT_H

#include "Students.hpp"


using namespace std;

class Student{
private:

const int N =10;
vector<Students*> vec_students;

public:

Student();
void makeStudents();
void sortStudents();
int binarySearch(int);

void printStudents();
void findStudentID();


};

#endif