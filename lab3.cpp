#include <bits/stdc++.h>
using namespace std;
class Point{
    private:
    int x, y;
    public:
    Point() : x{0}, y{0} {}
    Point(int p, int q) : x{p}, y{q} {}
    void show(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    Point add(Point p1){
        // Point p2;
        // p2.x = x + p1.x;
        // p2.y = y + p1.y;
        // return p2;
        return Point(x + p1.x, y + p1.y);
    }
};
int main() {
    // your code goes here
    Point p(5,10), q(15,20);
    p.show();
    q.show();  
    Point r= p.add(q);
    r.show();
    return 0;
}