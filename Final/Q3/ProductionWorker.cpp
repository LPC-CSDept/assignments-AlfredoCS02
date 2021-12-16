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