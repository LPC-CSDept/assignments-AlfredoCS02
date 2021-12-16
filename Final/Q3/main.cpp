#include "ProductionWorker.hpp"
#include <fstream>

void printWorkers(ProductionWorker [],int);

int const N = 10;

int main(){

 ProductionWorker worker[N];
 ifstream file;
 file.open("data.txt"); 
 
 string name,s1;
 int id,day,month,year,shift;
 double payrate;
 Date date;
 
for(int i=0;i<N;i++)
{
  file>>name>>id>>s1>>shift>>payrate;

month = stoi(s1.substr(0,s1.find('/')));
day = stoi(s1.substr(3,s1.find('/')));
year = stoi(s1.substr(6,s1.find(' ')));
//cout<<month<<"/"<<day<<"/"<<year<<endl;
date.setDate(month,day,year);
worker[i].setWorker(name,id,date,shift,payrate);

}
file.close();

//print all
printWorkers(worker,N);

//comparing
cout<<"\n==========="<<endl;
cout<<"Comparing"<<endl;
cout<<"===========\n"<<endl;
cout<<"Employee(p1) - ";
cout<<"$"<<worker[0].getPayrate()<<"/per hour";
cout<<endl;
cout<<"Employee(p2) - ";
cout<<"$"<<worker[7].getPayrate()<<"/per hour";
cout<<endl;

worker[0]>worker[7];

//highest
highestPayrate(worker,N);
}


void printWorkers(ProductionWorker w[],int N){

for(int i=0;i<N;i++)
{
cout<<"\n------------"<<endl;
cout<<"Employee #"<<i+1<<endl;
cout<<"------------"<<endl;
cout<<"Name: "<<w[i].getName()<<endl;
cout<<"ID: "<<w[i].getID()<<endl;
printDate(w[i].getDate());
if(w[i].getShift() == 1)
cout<<"Day Shift - ";
else 
cout<< "Night Shift - ";
cout<<"$"<<w[i].getPayrate()<<"/per hour"<<endl;
}
}