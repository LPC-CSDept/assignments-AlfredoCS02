#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <iostream>

using namespace std;

class Square{
private:
  int width;
public:
  Square();
  void setWidth(double);
  int getWidth(void) const;
  int getArea(void) const;
  friend class Rectangle;
};

class Rectangle{
  private:
  double width;
  double height;

  public:
  Rectangle();
  void setWidth(double);
  void setHeight(double);
  double getWidth(void) const;
  double getHeight(void) const;
  double getArea(void) const;
  Rectangle makeRectanglewithSquare(Square s);
};

#endif