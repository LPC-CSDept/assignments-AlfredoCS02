#ifndef NUMBERS_H
#define NUMBERS_H

#include <string>
#include <iostream>

using namespace std;

class Numbers{

private:
  int size;
  int *head;

public:
  Numbers();
  Numbers(int);
  int getSize() const;
  int getElement(int) const;
  double getSum() const;
  double getAvg() const;
  void setElement();
  void setElement(int,int);
  void bubbleSort(int);
  void printNumbers(int);
  void clear();


};


#endif