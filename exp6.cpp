#include <iostream>
using namespace std;

class Demo
{
    int value;

public:
    // Default Constructor
    Demo()
    {
        value = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Demo(int v)
    {
        value = v;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Demo(const Demo &obj)
    {
        value = obj.value;
        cout << "Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Demo obj1;
    obj1.display();

    Demo obj2(50);
    obj2.display();

    Demo obj3(obj2);
    obj3.display();

    return 0;
}