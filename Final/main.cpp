#include "Course.hpp"
#include <fstream>

void printCourses(Course [],int);

int const N = 10;

int main(){
Course c[N];
ifstream file;
file.open("data.txt");

int id, credits, target; 
string name;

for(int i=0;i<N;i++){
  file>>id>>name>>credits;
  c[i].setCourse(id,name,credits);
}

printCourses(c,N);

}


void printCourses(Course c[], int n){
  for (int i=0;i<N;i++)
  {
    cout<<"ID: "<<c[i].getID()<<endl;
    cout<<"Credits: "<<c[i].getCredit()<<endl;
    cout<<"Name: "<<c[i].getName()<<endl;
    cout<<"--------------------------- "<<endl;
  }
}