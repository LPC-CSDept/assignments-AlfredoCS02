#include <fstream>
#include <iostream>
using namespace std;

struct Student{
int id;
char name[20];
double score[2];
double sum;
double avg;
};

void findStudent(Student[]);



int main()
{

ifstream file;
ofstream newfile;

Student s[10];
file.open("students.txt");
newfile.open("students.bin");

//Read "students.txt" file and save data in "Student" structure
for (int i=0; i<10; i++)
{
  file>> s[i].id;
  file>> s[i].name;
  file>> s[i].score[0];
  file>> s[i].score[1];
  s[i].sum = s[i].score[0] + s[i].score[1];
  s[i].avg = s[i].sum/2;
}

//Write values from "Student" structure in "students.bin" file
for (int i=0; i<10; i++)
{
  newfile.write((char *)&s, sizeof(s));
}

findStudent(s);

cout<<"\nprogram ending..."<<endl;

}

//Function to find student ID

void findStudent(Student s[]){
  int input;
  bool found = 0;
  do{
    cout<<"Please enter a student ID: "<<endl;
    cin>> input;
    for(int i=0; i<10; i++){
   if(input == s[i].id ){
     cout<<"\n[Student information found]\n\n";
     cout<<"-Student ID: "<<s[i].id<<endl;
     cout<<"-Student Name: "<<s[i].name<<endl;
     cout<<"-1st Score: "<<s[i].score[0]<<endl;
     cout<<"-2nd Score: "<<s[i].score[1]<<endl;
     cout<<"-Total Score: "<<s[i].sum<<endl;
     cout<<"-Average Score: "<<s[i].avg<<endl;
     cout<<endl;
     found =1;
   }
  }
  if(found!=1)
  cout<<"ID not found. ";
  }while (found!=1);


  
}
