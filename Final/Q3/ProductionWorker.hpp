#ifndef PRODUCTIONWORKER
#define PRODUCTIONWORKER

#include "Employee.hpp"

class ProductionWorker: public Employee{

private:
int shift;
double payrate;

public:
ProductionWorker();
ProductionWorker(string,int,Date,int,double);
void setWorker(string,int,Date,int,double);
int getShift();
double getPayrate();

void operator>(ProductionWorker);
void friend highestPayrate(ProductionWorker [],int);

};

#endif