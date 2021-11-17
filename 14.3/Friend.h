#ifndef FRIEND_H
#define FRIEND_H
#include <iostream>
using namespace std;

class Square
{
  private:
    int width;
  public:
    Square();
    void setWidth(double);
    int getWidth(void) const;
    int getArea(void) const;
    friend class rect;
};

class rect
{
  private:
    double width;
    double height;
  public:
    rect();
    void setWidth(double);
    void setHeight(double);
    double getWidth(void) const;
    double getHeight(void) const;
    double getArea(void) const;
    rect makeRectanglewithSquare(Square s);
};

#endif

