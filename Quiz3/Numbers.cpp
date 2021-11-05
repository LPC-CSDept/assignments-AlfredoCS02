#include "Numbers.hpp"
#include <ctime>



Numbers::Numbers()
{
  ID = -1;
}

Numbers::Numbers(int id,int size)
{
  ID = id;
  srand(time(0));
  for(int i=0;i<size;i++){
  int num = rand() % 100 + 1;
  numbers.push_back(num);
  }
}

int Numbers::getID() const
{
  return ID;
}

int Numbers::getSize() const
{
 return numbers.size();
}

int Numbers::getElm(int n) const
{
 return numbers.at(n);
}

int Numbers::getMax() const
{
 int max = getElm(0);
 for(int i=1; i<getSize(); i++)
 {
   if(getElm(i)> max)
   max = getElm(i);
 }
 return max;
}

int Numbers::getMin() const
{
  int min = getElm(0);
  for(int i=1; i<getSize(); i++)
 {
   if(getElm(i)< min)
   min = getElm(i);
 }
 return min;
}

int Numbers::getSum() const
{
  int sum = 0;
  for(int i=0; i<getSize(); i++)
  {
    sum+=getElm(i);
  }
 return sum;
}

void Numbers::deleteElm(int)
{

}

void Numbers::addElm(int)
{

}

void Numbers::printAll() const
{

}