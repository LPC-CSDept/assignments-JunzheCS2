#include "Numbers.h"
#include <iostream>
using namespace std;

int main()
{
  Numbers n1(10);
  Numbers n2;
  n2 = n1;

  cout << " n1: " << endl; 
  printNumbers(n1);

  cout << "n2: ";
  printNumbers(n2);
  
  cout << "n1 > n2 = " << endl;
  cout << (n1>n2) << endl;

  Numbers n3 = n1 + n2;
  cout << " n3: " << endl;
  printNumbers(n3);


  
  return 0;
}

