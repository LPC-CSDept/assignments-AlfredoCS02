#include <iostream>
#include <fstream>
using namespace std;

const int LEN_NAME = 20;
const int NUM_SCORES =3;

struct Student
{
  int sid;
  char sname[LEN_NAME];
  double score[NUM_SCORES];
};

int main(){

Student *s = new Student;

double sum,avg;

fstream file;
file.open("students.bin");
file.read((char *)&(*s), sizeof(*s));

  sum = s->score[0] + s->score[1] + s->score[2];
  avg = sum/3;

  if(avg>85)
  {
  cout<<"ID: "    <<s->sid<<"\t";
  cout<<"Name: "  <<s->sname<<endl;
  cout<<"score1: "<<s->score[0]<<"\t";
  cout<<"score2: "<<s->score[1]<<"\t";
  cout<<"score3: "<<s->score[2]<<"\t";
  }
  
}