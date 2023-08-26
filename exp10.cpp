#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    double getArea() {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Rectangle r(3, 4);
    Circle c(5);

    Shape *ptr1 = &r;
    Shape *ptr2 = &c;

    cout << "Area of rectangle: " << ptr1->getArea() << endl;
    cout << "Area of circle: " << ptr2->getArea() << endl;

    return 0;
}
