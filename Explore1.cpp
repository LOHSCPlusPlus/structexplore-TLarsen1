#include <iostream>
using namespace std;
struct Point {
    double x;
    double y;
    
};





int main() {
    
    Point a;
    a.x = 3;
    a.y = 9;
    
    Point b;
    b.x = 4.5;
    b.y = 7.8;

    Point c;
    c.x = 12.2;
    c.y = 9.9;

    cout << "Point a: x = " << a.x << ", y = " << a.y << endl;
    cout << "Point b: x = " << b.x << ", y = " << b.y << endl;
    cout << "Point c: x = " << c.x << ", y = " << c.y << endl;



    return 0;
}


