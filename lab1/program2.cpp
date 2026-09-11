//Design a program to convert a procedural implementation of a student record system into an object-oriented approach using classes and objects.
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    string branch;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter branch: ";
        cin >> branch;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details of first student:" << endl;
    s1.input();

    cout << "Enter details of second student:" << endl;
    s2.input();

    cout << "\nDetails of first student:" << endl;
    s1.show();

    cout << "Details of second student:" << endl;
    s2.show();

    return 0;
}