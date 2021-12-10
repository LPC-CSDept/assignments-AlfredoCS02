#include<iostream>

using namespace std;

int partition(int[],int,int);
void qsort(int[],int,int);
void printAll(int[],int);

int main(){

const int N = 7;
int n[N] ={1,8,5,9,4,3,7};

printAll(n,N);
qsort(n,0,N-1);
printAll(n,N);


return 0;
}



int partition (int num[],int first, int last){
  int pivot = num[last]; 
  int i= -1;
  for(int j=0;j<last;j++){ 
    if(num[j] <pivot){
      i++; 
      swap(num[i], num[j]);
  }
  }
  swap(num[i+1],num[last]); //swaps pivot in the new position
  
  return i+1; //returns new pivot index
}

void qsort(int num[], int first, int last){
  int pivot_idx;
  if(first>=last)
  return;
  pivot_idx = partition(num,first,last);
  qsort(num,first,pivot_idx -1); //sort left partition
  qsort(num,pivot_idx + 1,last); //sort right partition
}


void printAll(int num[],int N){
  for(int i=0;i<N;i++){
  cout<<num[i]<<" ";
}
cout<<endl;
}
