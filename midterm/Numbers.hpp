#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

template<typename T>

class Numbers
{
  private:
    int ID;
    vector<int>values;
    static in numOfObjects;
  public:
    Numbers()
    {
      this->id = 0;
      this->values = {};
      numOfObjects++;
    }
    Numbers(int i, int n)
    {
      this->id = i;
      this->numOfObjects++;
      for(int i=0;i<n;i++)
      {
        int n = (rand()%99+1);
        values.push_back(k);
      }
    }

    int getId()
    {
      return this->id;
    }

    void setId(int id)
    {
      Numbers::id = id;
    }

    const vector<int> &getValues() const
    {
      return values;
    }

    

};

#endif