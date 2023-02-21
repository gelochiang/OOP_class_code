#ifndef R_H
#define R_H

class Rectangle
{
private: // 這個記得打，不然CJ會報錯
    double width;
    double height;
public:
    double getArea();
    double getPerimeter();
    void setWidth(double);
    void setHeight(double);
};

#endif