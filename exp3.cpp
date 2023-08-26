#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> columns;

    int matrix[rows][columns];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == j) {
                primary_diagonal_sum += matrix[i][j];
            }
            if (i + j == rows - 1) {
                secondary_diagonal_sum += matrix[i][j];
            }
        }
    }

    cout << "Sum of primary diagonal elements: " << primary_diagonal_sum << endl;
    cout << "Sum of secondary diagonal elements: " << secondary_diagonal_sum << endl;

    return 0;
}
