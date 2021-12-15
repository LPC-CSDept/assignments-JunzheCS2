#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <vector>
using namespace std;

class stack
{
  private: 
    vector<int>pool;
  public:
    stack();
    stack(int);
    void clear();
    void isEmpty();
    void push(int);
    int pop();
    int topEL();
    int getSize();
    void printAll();

};

#endif