#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

template<typename T>

class Numbers // create numbers class
{
  private: // private varables
    int id;
    vector<int> values;
    int numOfObjects;
  public:  // public varables
    Numbers() // constructor
    {
      this->id = 0;
      this->values = {};
      numOfObjects++;
    }
    Numbers(int i, int n) 
    {
      this->id = i;
      this->numOfObjects++;
      for (int i=0;i<n; i++) 
      {
        int n = (rand()%99+1);
        values.push_back(n);
      }
    }
  // getters and setters
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

    void setValues(const vector<int> &values) 
    {
      Numbers::values = values;
    }

    friend void printNumbers(Numbers); // declare this friend void in hpp.

    bool operator>(Numbers<int> *n)
    {
      int c = 0;
      for (int i = 0; i < this->values.size(); i++) 
      {
        c += this->values[i];
      }
      int c1 = 0;
      for (int i = 0; i < n->values.size(); i++) 
      {
        c1 += n->values[i];
      }
        return c > c1;
    }


};

#endif