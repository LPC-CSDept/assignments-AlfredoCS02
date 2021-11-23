#include "Assignment.hpp"

using namespace std;

int main(){
  Numbers n1(10);
  Numbers n2;
  Numbers n3;
  
  n2=n1;
  cout<<"Numbers(n1): "<<endl;
  printNumbers(n1);
  cout<<"Numbers(n2): "<<endl;
  printNumbers(n2);

  cout<<"\nn1>n2 =  ";
  if(n1>n2) 
  cout<<"true"<<endl;
  else 
  cout<<"false"<<endl;
  
  n3 = n1+ n2; 
  cout<<"\nNumbers(n3): "<<endl;
  printNumbers(n3);
  

  return 0;
}