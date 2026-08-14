//Develop a program to demonstrate parameter passing techniques (call by value, reference, and address) and analyze their effects on variable modifications.
#include <bits/stdc++.h>
using namespace std;
void callByValue(int x) {
    x = x + 10; 
    cout << "Inside callByValue: x = " << x << endl;
}

void callByReference(int &y) {
    y = y + 10; 
    cout << "Inside callByReference: y = " << y << endl;
}

void callByAddress(int *z) {
    *z = *z + 10; 
    cout << "Inside callByAddress: z = " << *z << endl;
}

int main() {
    int a = 5, b = 5, c = 5;

    cout << "Initial values: a=" << a << ", b=" << b << ", c=" << c << endl;

    callByValue(a);
    cout << "After callByValue: a = " << a << endl; 

    callByReference(b);
    cout << "After callByReference: b = " << b << endl; 

    callByAddress(&c);
    cout << "After callByAddress: c = " << c << endl; 

    return 0;
}
