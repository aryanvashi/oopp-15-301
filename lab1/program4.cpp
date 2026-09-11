//Write a program to create a class for Time having hh, mm and ss. Create input method that takes value as parameter and set the value to corresponding variable. Create another method called show that will print the value of hh:mm:ss. Create any two objects in main and call input and show method respectively.
#include <iostream>
using namespace std;

class Time {
private:
    int hh, mm, ss;

public:
    void input(int h, int m, int s) {
        hh = h;
        mm = m;
        ss = s;
    }

    void show() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {
    Time t1, t2;

    t1.input(10, 30, 45);
    t2.input(15, 45, 30);

    cout << "Time 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}