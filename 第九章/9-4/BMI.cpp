#include "BMI.h"

double BMI::getBMI()
{
    return weight/(height*height);
}

void BMI::setHeight(double height)
{
    this->height = height;
}

void BMI::setName(string name)
{
    this->name = name;
}

void BMI::setWeight(double weight)
{
    this->weight = weight;
}