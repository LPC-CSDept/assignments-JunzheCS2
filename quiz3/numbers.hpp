#ifndef NUMBERS_H
#define NUMBERS_H

#include<vector>
#include<iostream>
using namespace std;

class Numbers
{
  private:
    int ID;
    vector<int> numbers;
  public:
    numbers();
    numbers(int,int);
    int getID() const;
    int getSize() const;
    int getElm(int i) const;
    int getMax() const;
    int getMin() const;
    int getSum() const;
    void deleteElm(int);
    void addElm(int);
    void printAll() const;

};

#endif