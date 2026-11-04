#include <iostream>
#include <iomanip>
using namespace std;

            // Manipulators in C++ //

int main() {
    
    int a = 10 , b = 70 , c = 1000000;
    cout << "The value of a without setw is:" << a << endl;
    cout << "The value of a without setw is:" << b << endl;
    cout << "The value of a without setw is:" << c << endl;

    cout << "The value of a is :" << setw(20) << a << endl;
    cout << "The value of a is :" << setw(20) << b << endl;
    cout << "The value of a is :" << setw(20) << c << endl;


    return 0;

}