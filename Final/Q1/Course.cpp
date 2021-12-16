#include "Course.hpp"

Course::Course(){
  ID =0000;
  name="";
  credit=0;
}

void Course::setCourse(int id, string n, int c){
  ID = id;
  name = n;
  credit = c;
}

int Course::getID(){
  return ID;
}

string Course::getName(){
  return name;
}

int Course::getCredit(){
  return credit;
}
