#ifndef STUDENTS_H
#define STUDENTS_H
#include <string>

using namespace std;

class Student{
private:
  int ID;
  string name;
  double score[3];
public:
  int getSid() const;
  string getSname() const;
  void setSname(string);
  void setSid(int);
  void setScores(int, int);
  double getScores(int) const;
  double getSum() const;
  double getAvg() const;

};

#endif