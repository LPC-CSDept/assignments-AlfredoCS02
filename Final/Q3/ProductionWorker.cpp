#include "ProductionWorker.hpp"

ProductionWorker::ProductionWorker(){
setEmployee("",0000,Date());
shift = 1;
payrate = 0.00;
}

ProductionWorker::ProductionWorker(string n,int id, Date d, int s, double p){
setEmployee(n,id,d);
shift = s;
payrate = p;
}

void ProductionWorker::setWorker(string n,int id, Date d, int s, double p){
setEmployee(n,id,d);
shift = s;
payrate = p;
}

int ProductionWorker::getShift(){
  return shift;
}

double ProductionWorker::getPayrate(){
  return payrate;
}

void ProductionWorker::operator>(ProductionWorker w)
{
double p1,p2;
p1 = this->getPayrate();
p2 = w.getPayrate();

if(p1>p2)
{
Date date = this->getDate();
cout<<"[p1>p2 = true]"<<endl;
cout<<"Name: "<<this->getName()<<endl;
cout<<"ID: "<<this->getID()<<endl;
printDate(this->getDate());
if(this->getShift() == 1) 
cout<<"Day Shift - ";
else 
cout<< "Night Shift - ";
cout<<"$"<<this->getPayrate()<<"/per hour"<<endl;
}
else
{
cout<<"[p2>p1 = true]"<<endl;
cout<<"Name: "<<w.getName()<<endl;
cout<<"ID: "<<w.getID()<<endl;
printDate(this->getDate());
if(w.getShift() == 1)
cout<<"Day Shift - ";
else 
cout<< "Night Shift - ";
cout<<"$"<<w.getPayrate()<<"/per hour"<<endl;
}
}

void highestPayrate(ProductionWorker w[], int N)
{
double max_pay = -1, payrate;
int id;
for(int i=0;i<N;i++)
{
payrate = w[i].getPayrate();
if(max_pay<payrate){
max_pay = payrate;
id = i;
}
}
cout<<"\n====================================="<<endl;
cout<<"The Employee with the highest payrate"<<endl;
cout<<"=====================================\n"<<endl;
cout<<"Name: "<<w[id].getName()<<endl;
cout<<"ID: "<<w[id].getID()<<endl;
printDate(w[id].getDate());
if(w[id].getShift() == 1)
cout<<"Day Shift - ";
else 
cout<< "Night Shift - ";
cout<<"$"<<w[id].getPayrate()<<"/per hour"<<endl;

}