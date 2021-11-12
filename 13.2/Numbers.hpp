#ifndef NUMBERS_H
#define NUMBERS_H
using namespace std;

class numbers
{
  private:
    int size;
    int *head;
  public:
    numbers();
    numbers(int);

    int getSize() const;
    int getElement(int e) const;
    double getSum() const;
    double getAvg() const;
    void setElement();
    void setElement(int c, int e);
    void bubbleSort(int desc);
    void printNumbers(int desc);
    void clear();
};

#endif