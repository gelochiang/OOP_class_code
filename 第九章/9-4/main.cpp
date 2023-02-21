#include <iostream>
#include <iomanip>
using namespace std;

#include "BMI.h"

int main()
{
    BMI person;
    string name;
    double weight, height;

    cin >> name >> weight >> height;
    person.setName(name);
    person.setHeight(height);
    person.setWeight(weight);

    cout << name << " " << fixed << setprecision(2) << person.getBMI() << endl;
    return 0;
}