#include "Course.hpp"
#include <fstream>

using namespace std;

int main(){
 Course course[4];
 Student s;
 ifstream file;
 ifstream sfile;
 file.open("coursestudents.txt");
 

 for(int i=0; i<4; i++){
 file>>course[i];
 cout<<course[i]<<endl;
}

file.close();

sfile.open("addstudents.txt");
int n, id, courseID; 
double score;
string courseName, name;
char grade;

while(sfile>>courseName>>n){

for(int i=0; i<4; i++){
if(course[i].getCName()==courseName)
courseID = i;
}

for(int i=0; i<n; i++)
{
 sfile>>id>>name>>grade>>score;
 s.setStudent(id,name,grade,score);
 course[courseID].addStudent(s);
 }

cout<<"Updated Students list for the Course "<<courseName<<endl;

cout<<course[courseID]<<endl;
}

}
