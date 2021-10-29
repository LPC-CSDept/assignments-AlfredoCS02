#include <iostream>
#include "students.h"

using namespace std;

int Student::getSid() const {
  return ID;
}

string Student::getSname() const{
  return name;
}

double Student::getScores(int n) const{
  return score[n];
}

double Student::getAvg() const{
  return ((score[0] + score[1] + score[2])/3);
}

double Student::getSum() const{
return (score[0] + score[1] + score[2]);
}

void Student::setSid(int num){
  ID = num;
}

void Student::setSname(string s){
  name = s;
}

void Student::setScores(int idx, int num){
  score[idx] = num;
}
