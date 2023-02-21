#include <iostream>
#include <iomanip>
using namespace std;

#include "Rectangle.h"

int main(){
	Rectangle r1, r2;
    double w, h;
    cin >> w >> h;
    r1.setWidth(w);
    r1.setHeight(h);
    cin >> w >> h;
    r2.setWidth(w);
    r2.setHeight(h);
	
    cout << fixed << setprecision(2) << r1.getArea() << " " << r1.getPerimeter() << endl;
    cout << r2.getArea() << " " << r2.getPerimeter() << endl;

    r2.setWidth(2.5);
    r2.setHeight(5.0);

    cout << r2.getArea() << " " << r2.getPerimeter() << endl;

	return 0;
}