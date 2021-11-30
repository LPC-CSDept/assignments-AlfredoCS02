#include "Numbers.hpp"

void printNumbers(Numbers n){

for(int i=0;i<n.values.size();i++){
cout<<n.values[i]<<endl;
}
}

int main()
{
Numbers n1(1008,15);
Numbers n2(1101,10);

cout<<"Numbers (ID: "<<n1.getID()<<")"<<endl;
cout<<"-------------------------"<<endl;
printNumbers(n1);
cout<<"Numbers (ID: "<<n2.getID()<<")"<<endl;
cout<<"-------------------------"<<endl;
printNumbers(n2);

cout<<"\n (n1>n2) =  ";
  if(n1>n2) 
  cout<<"true"<<endl;
  else 
  cout<<"false"<<endl;

return 0;
}