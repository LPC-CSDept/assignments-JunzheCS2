#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

class Numbers
{
  private:
    int ID;
    vector<int>values;
    static in numOfObjects;
  public:
    Numbers()
    {
      ID = 0;
      numOfObjects++;
    }

}