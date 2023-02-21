#include "Rectangle.h"

double Rectangle::getPerimeter()
{
    return 2*(width+height);
}

double Rectangle::getArea()
{
    return width*height;
}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

void Rectangle::setHeight(double height)
{
    this->height = height;
}