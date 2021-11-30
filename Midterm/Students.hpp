#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
#include <string>

using namespace std;

class Students{

private:
int ID;
string name;
int scores[3];

public:
Students();
Students(int,string,int,int,int);

int getID();
string getName();
int getScore1();
int getScore2();
int getScore3();
int getTotalScore();
Students findStudentID(int);

void friend printStudent(Students& s);


};

#endif