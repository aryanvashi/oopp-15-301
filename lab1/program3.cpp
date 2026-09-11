//Write a program to create a class for Point having x and y, create two method as input and show. Input method should take value of x and y from keyboard and show will print the value of x and y. Create any two objects in main and call input and show method respectively.
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    void input() {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }

    void show() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1, p2;

    cout << "Enter details for first point:" << endl;
    p1.input();

    cout << "Enter details for second point:" << endl;
    p2.input();

    cout << "\nFirst point:" << endl;
    p1.show();

    cout << "Second point:" << endl;
    p2.show();

    return 0;
}