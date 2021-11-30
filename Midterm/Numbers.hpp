#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
#include <vector>

using namespace std;

class Numbers{
  private:

  int ID;
  vector<int> values;
  static int NumofObjects;

  public:

  Numbers();
  Numbers(int, int);
  int getID();
  void setID(int);
  static int getNumObjects();
  friend printNumbers(Numbers);
  int operator>(const Numbers &);

}

#endif