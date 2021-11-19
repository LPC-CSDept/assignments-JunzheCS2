#include "Numbers.hpp"

using namespace std;

int main()
{
  Numbers n1(10);
  Numbers n2(n1);

  cout<<"Numbers (n1):"<<endl;
  printNumbers(n1);

  cout<<"Numbers (n2):"<<endl;
  printNumbers(n2);

  cout<<"Max number 1: "<<n1.getMax() <<endl;
  cout<<"Max number 2: "<<n2.getMax() <<endl;

  return 0;

}