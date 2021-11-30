#include "Student.hpp"

Student::Student(){
makeStudents();
sortStudents();
}

void Student::makeStudents(){

}

void Student::sortStudents(){
  
}

void Student::printStudents()
{
cout<<"Students Info: "<<endl;
for(int i=0; i<N; i++){
  students[i]->printStudent();
}
}


int Student::binarySearch(int target){
    int first, last, mid;
    first =0;
    last = N-1;
    while (first <= last)
    {
        mid = (first + last) /2;
        if (students[mid].id == target)
            return mid;
        else if (students[mid].id < target)
            first = mid + 1;
        else if (students[mid].id > target)
            last = mid - 1;
    }
return -1;
}


void Student::findStudentID(){
  
  int id, index;
  cout<<"Enter student ID number to search: "<<endl;
  cin>>id;
  index = binarySearch(id);

  if(index == -1)
    {
    cout<<"Student not found..."<<endl;
    }
  else
    {
     students[index]->printStudent();
    }
}