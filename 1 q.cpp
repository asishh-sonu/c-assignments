#include <iostream>
using namespace std;

// Function to find the area of a triangle
double area(double base, double height) {
    return 0.5 * base * height;
}

// Function to find the area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Function to find the area of a circle
double area(double radius) {
    return 3.14159 * radius * radius;
}

// Function to find the area of a square
double area(double side) {
    return side * side;
}

int main() {
    double base, height, length, width, radius, side;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << area(base, height) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << area(length, width) << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << area(side) << endl;

    return 0;
}

