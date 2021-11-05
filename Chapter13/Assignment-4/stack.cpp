#include "stack.hpp"

Stack::Stack()
		{
			pool.reserve(0);
		}
Stack::Stack(int n)
		{
			pool.reserve(n);
		}
void Stack::isEmpty()
		{
			if(pool.empty()==true)
      cout<<"==The stack is empty=="<<endl;
      else
      cout<<"==The stack is not empty=="<<endl;
		}
void Stack::clear()
		{
			pool.clear();
		}
void Stack::push(int el)
		{
			pool.push_back(el);
		}
int Stack::pop()
		{
			int value = pool.back();
			pool.pop_back();
			return value;
		}
int Stack::topEl()
		{
			return pool.back();
		}
void Stack::getSize()
		{
			cout<<"Stack size: "<<pool.size()<<endl;
		}
void Stack::printAll() 
		{
			for(int i=0; i<pool.size(); i++)
				cout << pool[i] << "\t";
			cout <<endl;
		}
