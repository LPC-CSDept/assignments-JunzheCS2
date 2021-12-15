#include "Numbers.hpp"
#include <iostream>
using namespace std;
void printNumbers(Numbers<int> *);

int main() 
{
  srand(time(NULL)); // random numbers
  // set radom numbers in *n1 and *n2
  Numbers<int> *n1 = new Numbers<int>(1, 10);
  Numbers<int> *n2 = new Numbers<int>(2, 10);
  printNumbers(n1); //print all random data
  printNumbers(n2);

  bool l = n1->operator>(n2); // use bool to compare and return 1/0

  if (l) 
  {
    cout << " True " << endl;
  } 
  else 
  {
    cout << " False " << endl;
  }
  return 0;
}

void printNumbers(Numbers<int> *pNumbers) // print all
{
  cout << "Values: ";
  for (int i=0; i< pNumbers->getValues().size(); i++)
  {
    cout << pNumbers->getValues()[i] << " ";
  }
    cout << endl;
}