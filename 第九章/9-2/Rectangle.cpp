#include "Rectangle.h"

double Rectangle::getPerimeter()
{
    return 2*(width+height);
}
double Rectangle::getArea()
{
    return width*height;
}