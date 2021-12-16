#include "ProductionWorker.hpp"
#include <fstream>

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

day = stoi(s1.substr(0,s1.find('/')));
month = stoi(s1.substr(3,s1.find('/')));
year = stoi(s1.substr(6,s1.find(' ')));
cout<<month<<"/"<<day<<"/"<<year<<endl;
date.setDate(day,month,year);
worker[i].setWorker(name,id,date,shift,payrate);
}
file.close();

 return 0;
}