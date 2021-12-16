#include "Course.hpp"
#include <fstream>
#include <vector>

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

cout<<"\n==[Sorting IDs]==\n\n";
cout<<"partitions = '()' ; pivot = '<>'"<<endl<<endl;

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

int pivot_idx = last;
vector<int> numbers;

//cout partitions/pivot #1
if(first<last){
  for(int j=first;j<last;j++){
    if(c[j].getID()<c[pivot_idx].getID())
    numbers.push_back(c[j].getID());
  }

  if(numbers.size()!=0){
  cout<<"(";
  for(int i=0;i<numbers.size();i++){
    cout<<numbers[i];
    if(i+1<numbers.size()) 
    cout<<",";
}
  cout<<")";
}

cout<<"<"<<c[pivot_idx].getID()<<">";
    
numbers.clear();
  for(int j=first;j<last;j++){
  if(c[j].getID()>c[pivot_idx].getID())
  numbers.push_back(c[j].getID());
  }

if(numbers.size()!=0){
cout<<"(";
for(int i=0;i<numbers.size();i++){
    cout<<numbers[i];
    if(i+1<numbers.size()) 
    cout<<",";
  }
cout<<")";
}
cout<<endl;
}
//

if(first>=last)
return;
pivot_idx = partition(c,first,last);

//cout partitions/pivot #2
if(pivot_idx!=first)
  cout<<"("<<first<<","<<pivot_idx-1<<")";
  cout<<"<"<<pivot_idx<<">";
if(pivot_idx!=last)
  cout<<"("<<pivot_idx+1<<","<<last<<")";
  cout<<endl<<endl;
//

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
