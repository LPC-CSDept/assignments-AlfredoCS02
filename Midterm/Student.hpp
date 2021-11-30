#ifndef NUMBERS_H
#define NUMBERS_H

#include "Students.hpp"
#include <iostream>
#include <fstream>

using namespace std;

class Student{
private:

const int N =10;
vector<Students*> students;

public:

Student();
void makeStudents();
void sortStudents();
void printStudents();
int binarySearch(int);
void findStudentID();




};

#endif