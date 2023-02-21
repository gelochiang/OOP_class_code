#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
public:
    double width;
    double height;
    double getArea()
    {
        return width*height;
    }
    double getPerimeter()
    {
        return 2*(width+height);
    }
};

int main(){
	Rectangle r1, r2;
    cin >> r1.width >> r1.height;
    cin >> r2.width >> r2.height;
	
    cout << fixed << setprecision(2) << r1.getArea() << " " << r1.getPerimeter() << endl;
    cout << r2.getArea() << " " << r2.getPerimeter() << endl;

    r2.width = 2.5;
    r2.height = 5.0;

    cout << r2.getArea() << " " << r2.getPerimeter() << endl;

	return 0;
}