#include "numbers.hpp"
#include <ctime>

using namespace std;
//Default constructor
Numbers::Numbers(){
  size = 10;
  head = new int[size];
}
//Overloaded constructor
Numbers::Numbers(int s){
  size = s;
  head = new int[size];
}

int Numbers::getSize() const{
 return size;
}
int Numbers::getElement(int idx) const{
return head[idx];
}
double Numbers::getSum() const
{
  double sum=0;
  for(int i=0;i<size;i++){
    sum+= head[i];
  }
  return sum;
}
double Numbers::getAvg() const{
  double avg=0;
   for(int i=0;i<size;i++){
    avg+= head[i];
  }
  avg = avg/size;
  return avg;
}
//fill array with random numbers
void Numbers::setElement(){
  srand(time(0));
  for(int i=0;i<size;i++){
  head[i] = rand() % 100 + 1;
}}
//change the value at index "idx" to "num"
void Numbers::setElement(int num, int idx){
  head[idx] = num;
}
void Numbers::bubbleSort(int x){
int i,j;
  if(x==0)
  {
    for(i=0; i<size-1; i++)
    {
      for (j = 0; j < size-i-1; j++)
      {
         if (head[j] > head[j+1])
         swap(head[j], head[j+1]); 
      }
    }
  }
  else
  {
    for(int i=0; i<size-1; i++)
    {
      for (j = 0; j < size-i-1; j++)
      {
         if (head[j] < head[j+1])
         swap(head[j], head[j+1]); 
      }
    }
  }

 }

 void Numbers::printNumbers(int x){
   int i;
   cout<<"\nNumbers: ";
   if(x==1){
     if(head[0] > head[1])
     for(i=0;i<size;i++){
       cout<<head[i]<<" | ";
     }
     else
     for(i=size-1;i>=0;i--)
     cout<<head[i]<<" | ";
   }
   else
   for(i=0;i<size;i++){
     cout<<head[i]<<" | ";
   }
 }

 void Numbers::clear(){
   delete[] head;
 }