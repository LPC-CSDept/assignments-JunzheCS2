#ifndef NUMBERS_H
#define NUMBERS_H

class NUMBERS
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
    void deleteElm(int d);
    void addElm(int a);
    void printAll() const;

};

#endif