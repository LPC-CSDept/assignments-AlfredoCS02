#include <iostream>
using namespace std;

struct Node{
  int value;
  struct Node *next;
};

const int N = 5;

int main() 
{

Node *new_node, *ptr, *prev;
Node *head = nullptr;

int num;

for(int i=0; i<N; i++)
{

cout<<"Enter the value: ";
cin>> num;



new_node = new Node; //create new Node struct
new_node->value = num; //assign value
new_node->next = nullptr; 

if(head == nullptr) //if the list is empty
{
  head = new_node; //head points to the first node
}
else
{
prev = nullptr;
ptr = head; //ptr points to the first node
while (ptr != nullptr) //ptr cycles between all existing nodes
{
  if(new_node->value < ptr->value) //if Ptr current node value is greater than new_node value
  break; //stop loop
  else
  {
    prev = ptr; 
    ptr = ptr->next; 
  }
}
if (prev == nullptr){ //if the new_node is smaller than all existing nodes
head = new_node; //new_node becomes the first node
new_node-> next = ptr;
}
else
{
 new_node->next = prev->next; 
 prev->next = new_node; 
}}}
ptr = head;
int i = 1;
while(ptr!=nullptr) //cycles between all existing nodes
{
  cout<<"Node #"<<i++ << " value:"<<ptr->value<<endl;
  ptr = ptr->next;
}
}