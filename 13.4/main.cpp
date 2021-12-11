#include "stack.hpp"
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() 
{
  int size = 20;
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,13,14,15,16,17,18,19,20};

  stack<int> array(20); // not sure why stack is not applicable.

  for(int i=0;i<size;i++)
  {
    array.push(numbers[i]);
  }

  array.printAll();

  for(int i=0;i<size;i++)
  {
    numbers[i] = array.pop();
  }
  for(int i=0;i<size;i++)
  {
    cout << numbers[i] << endl; // after pop.
  }
} 