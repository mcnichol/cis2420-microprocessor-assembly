#include <iostream> 

short a = 5;
short b = 6;
short c = 7;
short d = 8;
short e;
short f;
short g;
short h;

using namespace std;

// Code
int main(){
    ++d;
    --c;
    b = a + 2;
    a = d + 9;
    e = a + b - c - d;
    f = -c;
    g = f + e;
    h = -b - c + a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;
    cout << "h: " << h << endl << endl;

    --h;
    g = g + 6;
    f = 16;
    e = -g - f;
    d = 5 - e;
    c = -c;
    b = c + e - h;
    a = -b + c - d;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;
    cout << "h: " << h << endl;
}
