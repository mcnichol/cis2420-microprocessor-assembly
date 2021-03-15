#include <iomanip>
#include <iostream>
using namespace std;


// Global variables
char a = 5;
char b = 6;
char c = 7;
char d = 8;
char e = 2;
char f = 3;
char g = 1;
char h = 4;

// Code
int main(){
    --h;
    c = g + h;
    d = e + 22 - c - b;
    g = -h;
    ++b;
    a = g + d - 15;
    b = a + 92 - b;
    h = d + (-f) - d;

    // Move a into the eax register
    // Move b into the ebx register
    // Move c into the ecx register
    // Move d into the edx register
    // Call the DumpRegs function
    cout << showpos << a << " " << b << " " << c << " " << d << " ";
    cout << endl;
    // Move e into the eax register
    // Move f into the ebx register
    // Move g into the ecx register
    // Move h into the edx register
    // Call the DumpRegs function
    cout << e << " " << f << " " << g << " " << h << " ";
    cout << endl;

    e = e - 6;
    g = 126;
    --a;
    b = 15 - e + f;
    c = -f;
    d = -h + g - a;
    e = a + c - a;
    f = c + 10 - b;

    // Move a into the eax register
    // Move b into the ebx register
    // Move c into the ecx register
    // Move d into the edx register
    // Call the DumpRegs function
    cout << a << " " << b << " " << c << " " << d << " ";
    cout << endl;

    // Move e into the eax register
    // Move f into the ebx register
    // Move g into the ecx register
    // Move h into the edx register
    // Call the DumpRegs function
    cout << e << " " << f << " " << g << " " << h << " ";
    cout << endl;

    // Call the WaitMsg function
}
