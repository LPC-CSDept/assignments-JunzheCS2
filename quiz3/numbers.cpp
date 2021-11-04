#include "numbers.hpp"
#include<iostream>
#include<cstdlib>
using namespace std;

Numbers::numbers()
{
  ID = -1;
}

Numbers::numbers(int id, int size)
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
  
}