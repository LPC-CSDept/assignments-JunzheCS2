#ifndef NUMBERS_H
#define NUMBERS_H

#include<iostream>
using namespace std;

class Numbers
{
  private:
    int size;
    int * numbers;

  public:
    Numbers();
    Numbers(int n);
    Numbers(const Numbers &);
    ~Numbers();
    int operator>(const Numbers &n);
    Numbers operator=(const Numbers &n);
    Numbers operator+(const Numbers &n);
    friend void printNumbers(const Numbers& n);
};
#endif //forget to add this