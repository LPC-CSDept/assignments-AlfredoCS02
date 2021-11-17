#include "Assignment.hpp"

Square::Square()
{
width = 100;
}

void Square::setWidth(double w)
{
  width = w;
}

int Square::getWidth() const
{
 return width;
}

int Square::getArea() const
{
  return width *4;
}

Rectangle::Rectangle()
{
width = 50;
height = 20;
}

void Rectangle::setWidth(double w)
{
width = w;
}
void Rectangle::setHeight(double h)
{
height = h;
}
double Rectangle::getWidth(void) const
{
return width;
}
double Rectangle::getHeight(void) const
{
return height;
}
double Rectangle::getArea(void) const
{
return height*width;
}

Rectangle Rectangle::makeRectanglewithSquare(Square s){
  Rectangle newRect;

  newRect.setWidth(s.getWidth()); //get width from Square
  return newRect;
}
