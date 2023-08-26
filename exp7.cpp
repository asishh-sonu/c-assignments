#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    void getDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class ScienceStudent : public Student {
protected:
    string branch;
    float marks;
public:
    void getDetails() {
        Student::getDetails();
        cout << "Enter branch: ";
        cin >> branch;
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class EngineeringStudent : public ScienceStudent {
protected:
    string specialization;
public:
    void getDetails() {
        ScienceStudent::getDetails();
        cout << "Enter specialization: ";
        cin >> specialization;
    }
};

class ArtsStudent : public Student {
protected:
    string subject;
    float marks;
public:
    void getDetails() {
        Student::getDetails();
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter marks: ";
        cin >> marks;
    }
};

int main() {
    EngineeringStudent engStudent;
    ArtsStudent artsStudent;

    cout << "Enter details for Engineering student:" << endl;
    engStudent.getDetails();
    cout << "Enter details for Arts student:" << endl;
    artsStudent.getDetails();

    return 0;
}
