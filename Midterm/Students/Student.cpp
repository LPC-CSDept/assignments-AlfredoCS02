#include "Student.hpp"

Student::Student(){
makeStudents();
sortStudents();
}

void Student::makeStudents(){
ifstream file("Students.txt");
string name;
int id,s1,s2,s3;
while(file>>id>>name>>s1>>s2>>s3){
  Students *s = new Students(id,name,s1,s2,s3);
  vec_students.push_back(s);
}
file.close();
}


void Student::sortStudents(){
   int i,j;
 for(i=0;i<N-1; i++)
      for(j=0;j < N-i-1; j++)
      if (vec_students[j]->getID() > vec_students[j+1]->getID())
      swap(vec_students[j], vec_students[j+1]);  
}

void Student::printStudents()
{
cout<<"All Students (Info): "<<endl;
cout<<"-----------------------"<<endl;
for(int i=0; i<N; i++){
  vec_students[i]->printStudent();
  cout<<"-----------------------"<<endl;
}
}


int Student::binarySearch(int target){
    int first, last, mid;
    first =0;
    last = N-1;
    while (first <= last)
    {
        mid = (first + last) /2;
        if (vec_students[mid]->getID() == target)
            return mid;
        else if (vec_students[mid]->getID() < target)
            first = mid + 1;
        else if (vec_students[mid]->getID() > target)
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
     vec_students[index]->printStudent();
    }
}