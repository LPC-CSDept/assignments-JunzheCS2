#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <cstdlib>
using namespace std;

class numbers
{
  private:
    int size;
    int *head;
  public:
    numbers();
    numbers(int);

    int getSize() const;
    int getElement(int) const;
    double getSum() const;
    double getAvg() const;
    void setElement();
    void setElement(int, int);
    void bubbleSort(int);
    void printNumbers(int);
    void clear();
};

#endif