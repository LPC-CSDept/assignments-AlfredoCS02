#ifndef STACK_H
#define STACK_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Stack{
private:
  vector<int> pool;
public:
  Stack();
  Stack(int);
  void clear();
  void isEmpty();
  void push(int);
  int pop();
  int topEl();
  void getSize();
  void printAll();
};



#endif