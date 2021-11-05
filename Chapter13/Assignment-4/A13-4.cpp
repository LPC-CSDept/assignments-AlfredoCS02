#include "stack.hpp"
#include <ctime>

int main(){
  Stack array1(20);
  Stack stack(20);

  stack.isEmpty();
  cout<<"Creating array with 20 integer values..."<<endl;
  srand(time(0));
  for(int i=0;i<20;i++){
  int random = rand() % 100 + 1;
  array1.push(random);
  }
 
  array1.printAll();
  
  cout<<"Rearranging elements in reverse order..."<<endl;
  for(int i=0;i<20;i++){
    stack.push(array1.pop());
  }
  stack.printAll();
  cout<<"Top Element: "<<stack.topEl()<<endl;

  cout<<"Clearing the stack..."<<endl;
  stack.clear();
  stack.isEmpty();


 
}