#include <iostream>
using namespace std;

#include "Score.h"

int main()
{
    Score score1("John", 90), score2("Mary", 80);
    string name;
    int math;
    cin >> name >> math;
    score1.setName(name);
    cin >> name >> math;
    score2.setMath(math);

    score1.print();
    score2.print();
    
    return 0;
}