#include "Students.hpp"

Students::Students(){
  ID = 0;
  name = "";
  scores[0] = 0;
  scores[1] = 0;
  scores[2] = 0;
}

Students::Students(int id, string n, int s1,int s2,int s3){
ID = id;
name = n;
scores[0] = s1;
scores[1] = s2;
scores[2] = s3;
}

int Students::getID(){
  return ID;
}

string Students::getName(){
  return name;
}

int Students::getScore1(){
  return scores[0];
}

int Students::getScore2(){
  return scores[1];
}

int Students::getScore3(){
  return scores[2];
}

int Students::getTotalScore(){
  int total = scores[0]+scores[1]+scores[2];
  return total;
}
