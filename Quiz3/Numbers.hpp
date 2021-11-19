#ifndef NUMBERS_H
#define NUMBERS_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Numbers{
private:
  int ID;
  vector<int> numbers;
public:
  Numbers();
  Numbers(int,int);
  int getID() const;
  int getSize() const;
  int getElm(int) const;
  int getMax() const;
  int getMin() const;
  int getSum() const;
  void deleteElm(int);
  void addElm(int);
  void printAll() const;

  


};

#endif