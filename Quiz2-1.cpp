#include <iostream>
#include <ctime>

using namespace std;

void fillupArray(int*, int);
void printArray(int*, int);

int main(){
  const int N=10;
  int* ptr = new int[N];
  fillupArray(ptr,N);
  printArray(ptr,N);
}

void fillupArray(int* ptr, int N){
srand(time(0));
for(int i=0; i<N; i++)
 ptr[i]=rand()%100;
}

void printArray(int* ptr, int N){
for(int i=0; i<N; i++)
  cout<<ptr[i]<<", ";
}


