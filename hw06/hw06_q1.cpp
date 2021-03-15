#include <iostream> 

using namespace std;

// Global variables
int a = 5;
int b = 6;
int c = 7;
int d = 8;
int e = 2;
int f = 3;
int g = 1;
int h = 4;

// Code
int main(){
    --g;
    b = f + h;
    e = d + 22 - c - a;
    f = -g;
    ++a;
    g = f + e - 5;
    a = d + 19 - b;
    h = c + a + (-f);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl; 
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;
    cout << "h: " << h << endl << endl;
    
    g = g + 6;
    f = 16;
    --h;
    d = 5 - e;
    b = -b;
    e = -g + 11 - a;
    f = d + c - a;
    c = c - 100 + b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl; 
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;
    cout << "h: " << h << endl << endl;
}
