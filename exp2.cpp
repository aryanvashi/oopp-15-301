#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call by Value: " << x << endl;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}

// Call by Address
void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Inside Call by Address: " << *x << endl;
}

int main()
{
    int a = 10;

    cout << "Original value: " << a << endl;

    callByValue(a);
    cout << "After Call by Value: " << a << endl;

    callByReference(a);
    cout << "After Call by Reference: " << a << endl;

    callByAddress(&a);
    cout << "After Call by Address: " << a << endl;

    return 0;
}