#include "Course.hpp"
#include <fstream>

void printCourses(Course [],int);
void sortbyID(Course [], int);
int binarySearch(Course[],int,int);

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

//unsorted

cout<<"\n==[All Courses]==\n\n";
printCourses(c,N);

//sorted
sortbyID(c,N);
cout<<"\n==[Sorted by ID]==\n\n";
printCourses(c,N);

cout<<"Enter a Course ID to search: ";
cin>>target;

//binarySearch
target = binarySearch(c,N,target);

if(target==-1)
cout<<"Course not found.."<<endl;
else
{
cout<<"\n=============="<<endl; 
cout<<"Course found"<<endl;
cout<<"==============\n"<<endl;
 cout<<"ID: "<<c[target].getID()<<endl;
 cout<<"Credits: "<<c[target].getCredit()<<endl;
 cout<<"Name: "<<c[target].getName()<<endl;
}


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

void sortbyID(Course c[],int N)
{
   int i,j;
 for(i=0;i<N-1; i++)
      for(j=0;j < N-i-1; j++)
      if (c[j].getID() > c[j+1].getID())
      swap(c[j], c[j+1]);
}

int binarySearch(Course c[],int N, int target)
{
int first, last , mid;
first = 0;
last = N-1;
while(first <= last){
mid = (first + last) /2;
if (c[mid].getID() == target)
            return mid;
        else if (c[mid].getID() < target)
            first = mid + 1;
        else if (c[mid].getID() > target)
            last = mid - 1;
}
return -1;
}
