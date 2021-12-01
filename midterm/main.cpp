#include "Numbers.hpp"
#include <iostream>
using namespace std;
void printNumbers(Numbers<int> *);

int main()
{
  srand(time(NULL));
  Numbers<int> *n1 = new Numbers<int>(1,10);
  Numbers<int> *n2 = new Numbers<int>(2,10);
  printNumbers(n1);
  printNumbers(n2);

  bool l = n1->operator>(n2);

  if(l)
  {
    cout << " True " << endl;
  }

  else{
    cout << " False " << endl;
  }
  return 0;
}

void printNumbers(Numbers<int> *)