#include "Friend.h"
#include <iostream>
using namespace std;

Square::Square()
{
  width = 30;
}

void Square::setWidth(double w)
{
  width = w;
}

int Square::getWidth(void) const
{
  return width;
}

int Square::getArea(void) const
{
  return width * width;
}

rect::rect()
{
  width = 40;
  height = 50;
}

void rect::setWidth(double w)
{
  width = w;
}

void rect::setHeight(double h)
{
  height = h;
}

double rect::getWidth(void) const
{
  return width;
}

double rect::getHeight(void) const
{
  return height;
}

double rect::getArea(void) const
{
  return width * height;
}

rect rect::makeRectanglewithSquare(Square s)
{
  rect r;
  r.setWidth(r.getWidth());
  r.setHeight(r.getHeight());
  return r;
}