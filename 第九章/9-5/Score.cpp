#include "Score.h"

Score::Score(){};

Score::Score(string name, int math) : name(name), math(math) {}

void Score::setName(string name)
{
    this->name = name;
}

void Score::setMath(int math)
{
    this->math = math;
}

string Score::getName()
{
    return name;
}

int Score::getMath()
{
    return math;
}