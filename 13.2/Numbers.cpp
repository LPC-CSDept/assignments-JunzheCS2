#ifndef 	NUMBERS_H
#define 	NUMBERS_H

#include <iostream>
#include <cstdlib>
using namespace std;

// Need More time on get size and get Element.

class Number
{

private:
	int 	size;
	int 	*ptr;
public:
	Number() : size(0), ptr(nullptr){};
	Number(int s) 
	{
		size = s;
		ptr = new int[size];
	}

	~Number()
	{
		delete [] ptr; 
	}

	int getSize() const (int size)
	{	
		return size;
	}

	int getElement(int i) const ()
	{

	
	}

	int getSum() const 
	{
		int sum=0;
		for(int i=0;i<size; i++)
			sum += *(ptr+i);
		return sum;
	}

	int getAvg() const
	{
		int sum=0;
		for(int i=0;i<size; i++)
			sum += *(ptr+i);
		return sum / size; 
	}

	void setElement(int i, int d)
	{
		*(ptr+i) = d ;
	}

	void setElement()
	{
		for(int i=0;i<size; i++)
			*(ptr+i) = rand() % 100; 
	}

	void printOut () const 
	{
		for(int i=0;i<size; i++)
		{
			cout << *(ptr+i) << "\t ";
		}

		cout << endl;
	}
    
};
#endif