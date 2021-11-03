#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class DOB{
private:
  int month;
  int day;

public:
  DOB();
  DOB(int m, int d);
  int getMonth() const;
  int getDay() const;
  void printDate();
  void setDOB(int,int);
  void setMonth(int);
  void setDay(int);
};

class Student{
private:
 int sid;
 string sname;
 DOB dob;

public:
 Student();
 Student(string,int,DOB);
 int getID() const;
 string getSname() const;
 DOB getDOB() const;
 void setSname(string);
 void setID(int);
 void setDOB(DOB);
};

#endif