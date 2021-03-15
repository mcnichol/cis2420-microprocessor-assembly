#include <iostream> 

// Global variables
char  a = 5;
short b = 7;
int   c = 11;
int   d = 13;

using namespace std;
// Code
int main(){
    b = -a;
    d = a - 9;
    c = static_cast<int>(a);
    d = static_cast<int>(b);
    a = a - 3;
    d = c;
   
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;
    cout << "d:" << d << endl << endl;

    a = 9;
    b = 18;
    c = 7;
    d = 5;
    c = -a + b + c + d - (d + c + b + a);
    d = b - c - d - a + b + c - d - a - c - a + b + a + d + c - b;

    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;
    cout << "d:" << d << endl << endl;

}
