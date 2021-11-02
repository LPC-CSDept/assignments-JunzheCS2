#include "Numbers.hpp"
#include<iostream>
#include <cstdlib>
using namespace std;

numbers::numbers()
{
  *head = new int[10];
}

numbers::numbers(int n)
{
  *head = new int[n];
}

int numbers::getSize(int s) const{
  return sizeof(head);
}

int numbers::getElement(int e)
{
  return head[e];
}

double numbers::getSum(double s) const{
  double total = 0;
  for(int i = 0;i<sizeof(head);i++)
  {
    int sum =0;
    sum = head[i];
    total = total + sum;
  }
  return total;
}

double numbers::getAvg(double a) const{
  double total = getSum();
  int avg = 0;
  avg = total/sizeof(head);
  return avg;
}

void numbers::setElements(int c, v)
{
  head[c] = v;
}

void numbers::bubbleSort(dessc:int){
  for(int = 0;i<sizeof(head;i++)
  {
    for(int j=0;j<sizeof(head);j++)
      swap(head[j],head[j+1]);
  }
}

void numbers::printNumbers(desc:int){


  for(int i =0;i<sizeof(head);i++)
  {
    cout << head[i] << endl;
  }

}