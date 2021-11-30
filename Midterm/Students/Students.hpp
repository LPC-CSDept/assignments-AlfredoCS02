#ifndef STUDENTS_H
#define STUDENTS_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

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

void printStudent();



};

#endif