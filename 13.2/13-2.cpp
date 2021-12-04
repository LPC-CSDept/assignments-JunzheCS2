#include "Numbers.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{  
	srand(time(0));
  //rearrange my code

  numbers n;
  n.setElement();
  n.setElement(5,0); // give the index
  n.bubbleSort(0); // sort the numbers from small to big
  n.printNumbers(0); //print all the random numbers

  cout << endl;

  cout << " Sum : " << n.getSum() << endl;
  cout << " size : " << n.getSize() << endl;
  cout << " average : " << n.getAvg() << endl;

  return 0;
}