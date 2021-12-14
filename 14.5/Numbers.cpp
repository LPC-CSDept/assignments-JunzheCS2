#include "Numbers.h"
#include <iostream>
using namespace std;
Numbers::Numbers()
{
  size=0;
  numbers=NULL;  // constructor set original values
}
Numbers::Numbers(int n)
{
  size = 10;
  numbers = new int[size]; //give the values

  for(int i = 0; i<size; i++)
  {
    numbers[i] = rand() % 100; // random values by for loop
  }
}

Numbers::Numbers(const Numbers& n)
{
  size = n.size;
  numbers = new int[size];

  for(int i = 0; i<size; i++)
  {
    numbers[i] = n.numbers[i];
  }
}

Numbers::~Numbers()
{
  size = 0;
  delete[] numbers; // destructor
}

int Numbers::operator > (const Numbers &n){
    int arr1=0;
    int arr2=0;
    for (int i=0; i<size; i++){
        arr1+=numbers[i];
    }
    for (int i=0; i<n.size; i++){
        arr2+=n.numbers[i];
    }
    if (arr1>arr2){
        return 1;
    }
    else
        return 0;
}
Numbers Numbers::operator = (const Numbers &n){
    Numbers num;
    num.size=n.size;
    
    num.numbers=new int[n.size];
    for (int i=0; i<num.size; i++) {
        num.numbers[i] = n.numbers[i];
    }
    return num;
}
Numbers Numbers::operator + (const Numbers &n){
    Numbers num;
    num.size = size + n.size;
    
    num.numbers=new int[num.size];
    for (int i=0; i<size; i++) {
        num.numbers[i] = numbers[i];
    }
    for (int i=size; i<num.size; i++) {
        num.numbers[i] = n.numbers[i%n.size];
    }
    return num;
}

void printNumbers(const Numbers& n)
{
  for(int i = 0; i<n.size; i++)
  {
    cout << n.numbers[i] << " ";
  }
  cout << endl;
};


