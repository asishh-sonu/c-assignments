#include <iostream>
using namespace std;

class ElectricityBill {
    private:
        int units;
        double bill;

    public:
        // constructor
        ElectricityBill(int u) {
            units = u;
            bill = 0.0;
        }

        void calculateBill() {
            if (units <= 100) {
                bill = units * 1.20;
            } else if (units <= 200) {
                bill = 100 * 1.20 + (units - 100) * 2.00;
            } else {
                bill = 100 * 1.20 + 100 * 2.00 + (units - 200) * 2.50;
            }
        }

        void displayBill() {
            cout << "Total units consumed: " << units << endl;
            cout << "Total amount to be paid: " << bill << endl;
        }
};

int main() {
    int units;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    ElectricityBill bill(units);
    bill.calculateBill();
    bill.displayBill();

    return 0;
}
