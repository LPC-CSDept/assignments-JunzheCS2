#include "numbers.hpp"
#include<iostream>
#include<cstdlib>
using namespace std;

Numbers::Numbers()
{
  ID = -1;
}

Numbers::Numbers(int id, int size)
{
  ID = id;
  for(int i =0;i<size;i++)
  {
    numbers.push_back((rand()%99));
  }
}

int Numbers::getID() const
{
  return ID;
}

int Numbers::getSize() const
{
  return numbers.size();
}

int Numbers::getElm(int in) const
{
  return numbers.at(in);
}

int Numbers::getMax() const
{
  int max = numbers[0];
  for(int i =0;i<numbers.size();i++)
  {
    int now;
    now = numbers[i];
    if(now > max)
    {
      max = now;
    }
  }
  return max;
}

int Numbers::getMin() const
{
  int min = numbers[0];
  for(int i =0;i<numbers.size();i++)
  {
    int now;
    now = numbers[i];
    if(now < min)
    {
      min = now;
    }
  }
  return min;
}


int Numbers::getSum() const
{
  int sum = 0;
  for(int i=0;i<numbers.size();i++)
  {
    sum += numbers[i];
  }

  return sum;
}

void Numbers::deleteElm(int d)
{
  vector<int>::iterator i;
  for(i = numbers.begin();i < numbers.end();i++)
  {
    if(*i == d)
    {
      numbers.erase(i--);
    }
  }
}

void Numbers::addElm(int a)
{
  numbers.push_back(a);
}

void Numbers::printAll() const
{
  for(int i=0;i<numbers.size();i++)
  {
    cout << numbers[i] << endl;
  }
}