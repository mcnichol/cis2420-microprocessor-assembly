#include <iostream> 
#include <signal.h>
#include <string>
#include <type_traits>
#include <typeinfo>
#ifndef _MSC_VER
#   include <cxxabi.h>
#endif

using namespace std;

string isTrue(int);
bitset<32> toBinary(int);
void testUnsigned(unsigned int);
void testSigned(int);
void signal_callback_handler(int);
void cleanup();
void failQuit();
template <typename T> std::string type_name();

int main(){
    signal(SIGINT, signal_callback_handler);
    printf("\e[?25l");

    //int x= -2147483648;
    int x=    2147000000;
    unsigned ux = x;
    

    for(unsigned int i = 0; i < 4294967295; i++){
        //cout << toBinary(x) << " " << x << " " << type_name<decltype(x)>() << endl;
        //cout << toBinary(ux) << " " << ux << " " << type_name<decltype(ux)>() << endl;

        testUnsigned(ux);
        x++;
        ux = x;
    }

    return 0;
}

string isTrue(int value){
    return value == 1 ? "True" : "False";
}

bitset<32> toBinary(int value){
    return bitset<32>(value) ;
}

void testUnsigned(unsigned int value){
    string result = isTrue(((value >> 3) == (value / 8)));
    if(result != "True"){
        cout << endl;
        cout << " Not Valid for:" << endl; 
        cout << "Value         = " << value << endl;
        cout << "(x >> 3)      = " << (value >> 3) << endl;
        cout << "(x / 8)       = " << (value / 8)  << endl;
        cout << endl;
        cout << "Binary         = " << toBinary(value) << endl;
        cout << "(ux >> 3)      = " << toBinary((value >> 3)) << endl;
        cout << "(ux / 8)       = " << toBinary((value / 8))  << endl;
    } else{ 
        //cout << toBinary(value) << " Success: " << value << " " << type_name<decltype(value)>() << endl;
    }
}

void signal_callback_handler(int signum){
    cleanup();
    exit(signum);    
}

void cleanup(){
    printf("\e[?25h");
}

void failQuit(){
    cleanup();
    exit(EXIT_FAILURE); 
}

template <class T> std::string type_name() {
    typedef typename std::remove_reference<T>::type TR;
    std::unique_ptr<char, void(*)(void*)> own(
        #ifndef _MSC_VER
            abi::__cxa_demangle(typeid(TR).name(), nullptr,
                                           nullptr, nullptr),
        #else
            nullptr,
        #endif
            std::free
    );

    std::string r = own != nullptr ? own.get() : typeid(TR).name();

    if (std::is_const<TR>::value) r += " const";

    if (std::is_volatile<TR>::value) r += " volatile";

    if (std::is_lvalue_reference<T>::value) r += "&";
    else if (std::is_rvalue_reference<T>::value) r += "&&";

    return r;
}
