#include <iostream>
using namespace std;

class Cube {
    private:
        double side;

    public:
        // constructor
        Cube(double s) {
            side = s;
        }

        double calculateVolume() {
            return side * side * side;
        }

        void displayVolume() {
            cout << "Volume of the cube is: " << calculateVolume() << endl;
        }
};

int main() {
    double side;
    cout << "Enter the side of the cube: ";
    cin >> side;

    Cube cube(side);
    cube.displayVolume();

    return 0;
}
