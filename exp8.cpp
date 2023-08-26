#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getVolume() = 0;
};

class Cube : public Shape {
private:
    double side;

public:
    Cube(double s) {
        side = s;
    }

    double getVolume() {
        return side * side * side;
    }
};

class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) {
        radius = r;
        height = h;
    }

    double getVolume() {
        return 3.14159 * radius * radius * height;
    }
};

class Sphere : public Shape {
private:
    double radius;

public:
    Sphere(double r) {
        radius = r;
    }

    double getVolume() {
        return 4.0 / 3.0 * 3.14159 * radius * radius * radius;
    }
};

int main() {
    Cube c(5);
    Cylinder cyl(2, 5);
    Sphere s(3);

    cout << "Cube volume: " << c.getVolume() << endl;
    cout << "Cylinder volume: " << cyl.getVolume() << endl;
    cout << "Sphere volume: " << s.getVolume() << endl;

    return 0;
}
