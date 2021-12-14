#include "Numbers.h"
#include <iostream>
using namespace std;

int main()
{
  Numbers n1(10); // 10 elements
  Numbers n2(10); // forget to add (10) inside the n2, so n2 did not print out at the frist time

  cout << " n1: \t"; 
  printNumbers(n1);  // print n1

  cout << endl;

  cout << " n2: \t";
  printNumbers(n2);   // print n2
  
  cout << endl;

  n2 = n1; // move this to here incase anything changed above

  cout << "n1 > n2 = \t";
  cout << (n1>n2) << endl; // operator determined the 1 or 0.

  cout << endl;

  Numbers n3 = n1 + n2;
  cout << " n3: \t";
  printNumbers(n3);

  return 0;
}

