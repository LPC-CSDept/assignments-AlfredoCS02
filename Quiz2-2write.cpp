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
ifstream ifs;
ofstream ofs;
Student* s = new Student;
ifs.open("students.txt");
ifs >> s->sid >> s->sname;
ifs >> s->score[0]>>s->score[1]>>s->score[2];

//cout<< s->sid;
//cout<<s->sname;
//cout<<s->score[0];
//cout<<s->score[1];
//cout<<s->score[2];

ofs.open("students.bin");
ofs.write((char *)&(*s), sizeof(*s));

}