#include "Numbers.hpp"

#include<ctime>

int Numbers::NumofObjects=0;

Numbers::Numbers(){
  ID = 0;
  NumofObjects++;
}

Numbers::Numbers(int id, int n){
  ID = id;

  srand(time(0));
  for(int i=0; i<n; i++){
    values.push_back(rand()%100);
  }
  NumofObjects++;
}

int Numbers::getID(){
  return ID;
}

void Numbers::setID(int id){
  ID = id;
}

int Numbers::getNumObjects(){
  return NumofObjects;
}

int Numbers::operator>(const Numbers &n){
int n1= 0, n2 = 0;

for(int i =0; i < values.size(); i++){
  n1+=values[i]; 
}
for(int i =0; i < n.values.size(); i++){
  n2+=n.values[i]; 
}

if (n1>n2) 
return 1; 
else 
return 0; 
}
