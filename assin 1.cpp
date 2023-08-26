#include <iostream>
using namespace std;

class Operation
{
    protected:
        float num1, num2;
    public:
        Operation(float n1, float n2) : num1(n1), num2(n2) {}
        virtual void display() = 0;
};

class Addition : public Operation
{
    public:
        Addition(float n1, float n2) : Operation(n1, n2) {}
        void display()
        {
            cout << "Addition of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
        }
};

class Subtraction : public Operation
{
    public:
        Subtraction(float n1, float n2) : Operation(n1, n2) {}
        void display()
        {
            cout << "Subtraction of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
        }
};

class Multiplication : public Operation
{
    public:
        Multiplication(float n1, float n2) : Operation(n1, n2) {}
        void display()
        {
            cout << "Multiplication of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
        }
};

class Division : public Operation
{
    public:
        Division(float n1, float n2) : Operation(n1, n2) {}
        void display()
        {
            if(num2 == 0)
                cout << "Division by zero error" << endl;
            else
                cout << "Division of " << num1 << " and " << num2 << " is
