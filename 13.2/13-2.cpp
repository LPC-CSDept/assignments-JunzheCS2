#include "Numbers.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{  
	numbers n(5);
	n.setElement();
	n.printNumbers();

    cout << "Sum " << n.getSum() << endl;
	cout << "Size " << n.getSize() << endl;

	numbers N(10);

	for( int i=0;i<10; i++)
    {
		N.setElement(c,v);
    }

	N.printNumbers();
}