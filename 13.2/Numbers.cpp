#include "Numbers.hpp"
#include<iostream>
#include <cstdlib>


using namespace std;

numbers::numbers()
{
  size = 10;
  head = new int[10];
}

numbers::numbers(int n)
{
  size = n;
  head = new int[n];
}

int numbers::getSize() const{
  return size;
}

int numbers::getElement(int e) const
{
  return head[e];
}

double numbers::getSum() const{
  double total = 0;
  for(int i = 0;i<size;i++)
  {
    total += head[i];
  }
  return total;
}

double numbers::getAvg() const{
  return getSum()/size;
}
void numbers::setElement() //forget this
{
  for(int i=0;i<size;i++)
  {
    head[i] = rand()%99; //forget to set the value
  }
}
void numbers::setElement(int v, int i)
{
  head[v] = i; // i should be the index
}

void numbers::bubbleSort(int desc){
  if (desc==0){
    int i, j;
        for (i = 0; i < size-1; i++)
        {
          for (j = 0; j < size-i-1; j++)
              if (head[j] > head[j+1])
                  swap(head[j], head[j+1]);
        }
    }
    else{
        int i, j;
          for (i = 0; i < size-1; i++)
          {
          for (j = 0; j < size-i-1; j++)
              if (head[j] < head[j+1])
                  swap(head[j], head[j+1]);
          }
    }
}

void numbers::printNumbers(int desc){


  if (desc==0){
    for (int i=0; i<size; i++){
        cout << head[i] << endl;
      }
    }
    else{
      for (int i=size-1; i>=0; i--){
        cout << head[i] << endl;
      }
    }

}

void numbers::clear()
{
  delete[] head;
}