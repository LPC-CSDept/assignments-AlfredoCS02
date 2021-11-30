#include "Students.hpp"

void printStudent(Students &s){
cout<<"Name: "<<s.name<<endl;
cout<<"ID: "<<s.ID<<endl;
cout<<"Score1: "<<s.scores[0]<<endl;
cout<<"Score2: "<<s.scores[1]<<endl;
cout<<"Score3: "<<s.scores[2]<<endl;
cout<<"Total: "<<s.getTotalScore()<<endl;
}

int main(){
Students s1(1001,"Max",10,8,6);

printStudent(s1);

}