#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle();
    void setWidth(double newWidth);
    void setHeight(double newHeight);

    double getArea();
    double getCircum();
    void printData();
};

#endif // RECTANGLE_H
