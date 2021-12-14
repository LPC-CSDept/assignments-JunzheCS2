#include "Numbers.h"
#include <iostream>
using namespace std;
using namespace std;
// Professor, I did it all over agian myself, I combined hpp and cpp together and I used different ways to give the values in the operators and set the numbers amount to 10. First compile it will show the random numbers from 0-99 and then you have to input values yourself and the result will show up. 
int main()
{
  Numbers n1(10);
  
  cout << " please check the Numbers below : " << endl;
  cout << n1 << endl;

  cout << " add 10 new numbers " << endl;
  cin >> n1;

  cout << " New Numbers " << n1 << endl;

  return 0;
}

