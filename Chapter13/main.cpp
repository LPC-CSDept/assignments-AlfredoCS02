#include <iostream>
#include "students.h"

using namespace std;

int main() {
  Student s;

  s.setSid(10001);
  s.setSname("Jhon");
  for(int i=0;i<3;i++)
  s.setScores(i,100);

  cout<<"***Student information***"<<endl;
  cout<<"-ID: "<< s.getSid()<<endl;
  cout<<"-Name: "<< s.getSname()<<endl;
  cout<<"-Score 1: "<< s.getScores(0)<<endl;
  cout<<"-Score 2: "<< s.getScores(1)<<endl;
  cout<<"-Score 3: "<< s.getScores(2)<<endl;
  cout<<"-Sum: "<<s.getSum()<<endl;
  cout<<"-Average: "<<s.getAvg()<<endl;


}