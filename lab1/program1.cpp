// Write a program to store details of any two students such as name, roll, branch. Take input from user and show their details.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    string branch;
};

int main() {
    Student s1, s2;

    cout << "Enter details of first student:" << endl;
    cout << "Name: ";
    cin >> s1.name;
    cout << "Roll: ";
    cin >> s1.roll;
    cout << "Branch: ";
    cin >> s1.branch;

    cout << "Enter details of second student:" << endl;
    cout << "Name: ";
    cin >> s2.name;
    cout << "Roll: ";
    cin >> s2.roll;
    cout << "Branch: ";
    cin >> s2.branch;

    cout << "\nDetails of first student:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Branch: " << s1.branch << endl;

    cout << "\nDetails of second student:" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Roll: " << s2.roll << endl;
    cout << "Branch: " << s2.branch << endl;

    return 0;
}