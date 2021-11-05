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
  cout<<"Numbers SetID "<< numberset[i].getID() <<"\n";
  numberset[i].printAll();
}

int id = findMax(numberset, N);

cout<<"The set ID that has max difference is "<<id<<"\t";
cout<<"The diff is"<<numberset[id-1].getMax() - numberset[id-1].getMin() <<endl;

deDup(numberset[2], numberset[3]);
cout<<"ID 3 - ID4\n";
numberset[2].printAll();

deDup(numberset[0], numberset[1]);
cout<<"ID 1 - ID 2\n";
numberset[0].printAll();

}

int findMax(Numbers numberset[], int size){
  int max_diff = -1;
  int max_ID;
  for(int i = 0; i < size; i++)
{
  int max_curr = numberset[i].getMax() - numberset[i].getMin();
  if(max_curr> max_diff)
  {
  max_diff = max_curr;
  max_ID = numberset[i].getID();
  }
}
 return max_ID;
}

void deDup(Numbers &numberset1, Numbers &numberset2){
  for(int i=0;i<numberset2.getSize(); i++){
    numberset1.deleteElm(numberset2.getElm(i));
  }
}