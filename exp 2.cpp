#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1;
    int len = binary.length();

    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base = base * 2;
    }

    return decimal;
}

string decimalToOctal(int decimal) {
    string octal = "";
    while (decimal > 0) {
        int rem = decimal % 8;
        octal = to_string(rem) + octal;
        decimal = decimal / 8;
    }
    return octal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    string octal = decimalToOctal(decimal);

    cout << "Octal equivalent: " << octal << endl;
    return 0;
}
