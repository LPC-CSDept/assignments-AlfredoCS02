#include "Employee.hpp"

Date::Date(){
  month = 1;
  day = 1;
  year = 0;
}

Date::Date(int m,int d,int y){
  month = m;
  day = d;
  year = y;
}

void Date::setDate(int m,int d,int y){
  month = m;
  day = d;
  year = y;
}

int Date::getMonth(){
  return month;
}

int Date::getDay(){
  return day;
}

int Date::getYear(){
  return year;
}

Employee::Employee(){
ID = 00000;
name = "";
Date();
}