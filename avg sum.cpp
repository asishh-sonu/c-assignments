#include <iostream>
using namespace std;

void calculate(float &sum, float &avg, float marks[5]) {
  sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += marks[i];
  }
  avg = sum / 5;
}

int main() {
  float marks[5], sum, avg;
  cout << "Enter marks for 5 subjects: ";
  for (int i = 0; i < 5; i++) {
    cin >> marks[i];
  }
  calculate(sum, avg, marks);
  cout << "Sum: " << sum << endl;
  cout << "Average: " << avg << endl;
  return 0;
}

