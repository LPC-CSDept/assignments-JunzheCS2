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

    int getSize(int s) const;
    int getElement(int e) const;
    double getSum(double s) const;
    double getAvg(double a) const;
    void setElement();
    void setElement(int c, v);
    void bubbleSort(dessc:int);
    void printNumbers(desc:int);
    clear();
}
#endif