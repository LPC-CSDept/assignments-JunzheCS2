#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>

using namespace std;

class Numbers
{
  private:
  int size;
  int *numbers;
  public:
  Numbers();
  Numbers(int n)
  {
    size = n;
    numbers = new int[n];
    for(int i=0;i<size;i++)
    {
      numbers[i] = rand()%99;
    }
  };

  Numbers(const Numbers &n)
  {
    size = n.size;
    numbers = new int[size];
    for(int i=0;i<size;i++)
    {
      numbers[i] = n.numbers[i];
    }
  };

  ~Numbers()
  {
    delete [] numbers;
  };

  int operator>(const Numbers &n)
  {
    int num1 = 0;
    int num2 = 0;
    for(int i=0;i<size;i++)
    {
      num1 = num1 + numbers[i];
    }
    for(int i=0;i<size;i++)
    {
      num2 = num2 + n.numbers[i];
    }
    
    if(num1 > num2)
    {
      return 1;
    }
    else
      return 0;
  };

  Numbers operator=(const Numbers &n)
  {
    this -> size = n.size;
    for(int i=0;i<size;i++)
    {
      this -> numbers[i] = n.numbers[i];
    }
    return n;
  };

  Numbers operator+(const Numbers &n)
  {
    int num1 = 0;
    int num2 = 0;
    for(int i=0;i<size;i++)
    {
      num1 = num1 + numbers[i];
    }
    for(int i=0;i<size;i++)
    {
      num2 = num2 + n.numbers[i];
    }

    return num1 + num2;
    
  };
  friend void printNumbers(Numbers n)
  {
    for (int i=0; i<n.size; i++)
    {
      cout << n.numbers[i] << endl;
    }
  }
  friend ostream &operator << (ostream &s, const Numbers &n)
  {
    for(int i=0;i<n.size;i++)
    {
      s << n.numbers[i] << "  ";
    }
    return s;
  }
  friend istream &operator >> (istream &s, const Numbers &n)
  {
    for (int i=0; i<n.size; i++)
    {
      s >> n.numbers[i];
    }
    return s;
  }
};

#endif