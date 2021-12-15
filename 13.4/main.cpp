#include "stack.hpp"
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() 
{
  int size = 20;
  int numbers[size];

  stack array(20);

  for(int i=0;i<size;i++)
  {
    for(int j=0;j<size;j++)
    {
      numbers[j] = j;
    }
    array.push(numbers[i]);   
  }

  array.printAll();  /// forward


  cout << endl << endl;


  for(int i=0;i<size;i++)
  {
    numbers[i] = array.pop();
  }
  for(int i=0;i<size;i++)
  {
    cout << numbers[i] << endl; // backwards.
  }
} 