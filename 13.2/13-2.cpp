#include "Numbers.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{  
	srand(time(0));
  numbers q;
  q.setElement();
  q.setElement(5,0);
  q.bubbleSort(0);
  q.printNumbers(0);
  
  numbers w(5);
  w.setElement();
  w.setElement(5,0);
  w.bubbleSort(1);
  w.printNumbers(1);

  cout<<"size of q " << q.getSize()<<endl;
  cout<<" size of w is " << w.getSize()<<endl;
  cout << " q index 0 " << q.getElement(0)<<endl;
  cout << " w index 0 " << w.getElement(0)<<endl;
  cout<<" sum of q " << q.getSum()<<endl;
  cout << " sum of w " << w.getSum()<<endl;
  cout<<" average of q " << q.getAvg() <<endl;
  cout << " average of w " <<w.getAvg() <<endl;

  q.clear();
  w.clear();

  return 0;
}