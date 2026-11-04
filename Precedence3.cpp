#include <iostream>
using namespace std;
int main() {

               // Operator Precedence in C++ //
               // Operator precedence is the order in which operators are evaluated in an expression.//
    int a = 18 , b = 16;
  //  int c = (a * b) +b;

    int c = ((((a * b) + b) - 50) + 120);
    cout << c << endl;
    
    return 0;
}