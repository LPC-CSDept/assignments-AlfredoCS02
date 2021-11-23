#include "Assignment.hpp"

using namespace std;

int main(){
  Numbers n1(5);
  
  cout<<"Numbers:"<<endl<<n1;
  cout<<"\n\nInsert new numbers: "<<endl;
  cin>>n1;
  cout<<"\nNew numbers:"<<endl<<n1;

  return 0;
}