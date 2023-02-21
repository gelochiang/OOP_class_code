#include <string>
using namespace std;

#ifndef S_H
#define S_H

class Score
{
private:
    string name;
    int math;

public:
    Score();
    Score(string, int);
    void setName(string);
    void setMath(int);
    string getName();
    int getMath();
    void print();
};

#endif