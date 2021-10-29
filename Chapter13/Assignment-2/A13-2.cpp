#include "numbers.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
  Numbers n1(5); // call overloaded constructor
  
  n1.setElement(); //generate random numbers
  n1.setElement(10,1); //change value to element at index 1 to 10
  n1.printNumbers(0); //print numbers
 
  cout<<"\n- Size: "<<n1.getSize(); //get size of the array
  cout<<"\n- Value at index 1: "<<n1.getElement(1); //get element at index 1
  cout<<"\n- Sum: "<<n1.getSum(); //get Sum of elements
  cout<<"\n- Average: "<<n1.getAvg()<<endl; //get Average of elements
  
  n1.bubbleSort(0); //sort numbers in ascending order
  n1.printNumbers(0); //print numbers
  n1.printNumbers(1); //print numbers in descending order
  
  n1.bubbleSort(1); //sort numbers in descending order
  n1.printNumbers(0); //print numbers
 
  n1.clear(); //delete memory space for numbers
}