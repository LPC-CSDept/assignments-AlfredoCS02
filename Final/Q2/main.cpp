#include "Course.hpp"
#include <fstream>

int partition (Course[],int,int);
void qsort(Course[],int,int);
void printCourses(Course[],int);

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

cout<<"\n==[All Courses]==\n\n";
printCourses(c,N);

qsort(c,0,N-1);

cout<<"\n==[Courses sorted by ID]==\n\n";
printCourses(c,N);

}




//functions

int partition (Course c[],int first, int last){
  int pivot = c[last].getID(); 
  int i= -1;
  
  for(int j=0;j<last;j++){ 
    if(c[j].getID() <pivot){
      i++; 
      swap(c[i], c[j]);
  }
  }
 
  
  swap(c[i+1],c[last]);

  return i+1; 
}


void qsort(Course c[], int first, int last){
int pivot_idx;

if(first>=last)
return;
pivot_idx = partition(c,first,last);

qsort(c,first,pivot_idx -1);
qsort(c,pivot_idx + 1,last); 
  
}


void printCourses(Course c[], int n)
{
  for (int i=0;i<N;i++)
  {
    cout<<"ID: "<<c[i].getID()<<endl;
    cout<<"Credits: "<<c[i].getCredit()<<endl;
    cout<<"Name: "<<c[i].getName()<<endl;
    cout<<"--------------------------- "<<endl;
  }
}