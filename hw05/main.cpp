
#include <iostream> 

using namespace std;

int main(){
    int x = 1;
    //int y = 1;
    unsigned ux = x;
    //unsigned uy = y;
    
    cout << ((ux >> 3) == (ux / 8)) << endl;

    return 0;
}
