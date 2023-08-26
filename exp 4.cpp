#include <iostream>
using namespace std;

inline int sum(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

inline double average(int a, int b, int c, int d, int e) {
    return sum(a, b, c, d, e) / 5.0;
}

int main() {
    int num1, num2, num3, num4, num5;
    cout << "Enter 5 numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int s = sum(num1, num2, num3, num4, num5);
    double avg = average(num1, num2, num3, num4, num5);

    cout << "Sum: " << s << endl;
    cout << "Average: " << avg << endl;

    return 0;
}
