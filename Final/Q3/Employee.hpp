#ifndef EMPLOYEE
#define EMPLOYEE
#include <iostream>
#include <string>

using namespace std;

class Date{
  private:
  int month;
  int day;
  int year;

  public:
  Date();
  Date(int,int,int);
  void setDate(int,int,int);
  
  int getDay();
  int getMonth();
  int getYear();
  friend void printDate(Date);
};

class Employee{
  private:
  string name;
  int ID;
  Date date;

  public:
  Employee();
  Employee(string,int,Date);
  void setEmployee(string,int,Date);

  int getID();
  string getName();
  Date getDate();
  
};

#endif