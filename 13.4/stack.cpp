#include "stack.hpp"
using namespace std;
stack::stack()
{
  pool.reserve(0);
}

stack::stack(int n)
{
  pool.reserve(n);
}

void stack::clear() //first time compile this could not work because this should be a void
{
  pool.clear(); //clear all the data
}

void stack::isEmpty()//check if the stack is isEmpty
{
  pool.empty();
}

void stack::push(int el)
{
  pool.push_back(el); //push el on top of the stack
}

int stack::pop()
{
  int n = pool.back();
  pool.pop_back();
  return n; // pop means that remove the top value and in the () of pop, there should not be any value in it.
} 

int stack::topEL()//put the elements on top
{
  return pool.back();
}

int stack::getSize() //get pool size
{
  return pool.size();
}

void stack::printAll() // print value
{
  cout << " values are : " << endl;
  for(int i=0;i<pool.size();i++)
  {
    cout << pool[i] << endl;
  }
}