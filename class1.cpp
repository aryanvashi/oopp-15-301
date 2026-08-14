#include <bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int real, img;
    public:
    void input(){
        cin>> real>> img;
    }
    void show(){
        cout<<real;
        if(img>=0) cout<<"+"<<img<<"i"<<endl;
        else cout<<img<<"i"<<endl;
    }
    void add(Complex c1, Complex c2){
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }
};

int main() {
	// your code goes here
	Complex c1, c2;
    cout<<"Enter the first complex number (real and imaginary parts): ";
    c1.input();
    cout<<"Enter the second complex number (real and imaginary parts): ";
    c2.input();
    cout<<"First complex number: ";
    c1.show();
    cout<<"Second complex number: ";
    c2.show();
    Complex c3;
    c3.add(c1, c2);
    cout<<"Sum of the two complex numbers: ";
    c3.show();
}
