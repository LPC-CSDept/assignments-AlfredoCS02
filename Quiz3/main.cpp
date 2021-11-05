#include "Numbers.hpp"
#include <ctime>

int findMax(Numbers[], int);
void deDup(Numbers &, Numbers &);

int main()
{
const int N=5;
srand(time(0));
Numbers numberset[] = {Numbers(1,3), Numbers(2,5), Numbers(3,10), Numbers(4,5), Numbers(5,7)};

for(int i=0;i<N;i++)
{
  cout<<"Numbers SetID "<< numberset[i].getID() <<"\t";
  numberset[i].printAll();
}

int id = findMax(numberset, N);

cout<<"The set ID that has max difference is "<<id<<"\t";
cout<<"The diff is"<<numberset[id].getMax() - numberset[id].getMin() <<endl;

deDup(numberset[2], numberset[3]);
cout<<"ID 3 - ID4\n";
numberset[2].printAll();

deDup(numberset[0], numberset[1]);
cout<<"ID 1 - ID 2\n";
numberset[0].printAll();

}