/*  Moses Peace Mccabe

    Understanding C++ namespace
*/
#include<iostream> 
using namespace std;

namespace boss
{
    int val = 5;
}

// Global Variable
int val = 10;

int main()
{
    int val = 100;                                 // local variable
    cout << "\nThe value of Val is: " << val       // local variable
         << "\nThe value of Global Variable is: " << ::val  // :: scope resolution operator
         << "\nThe Name Space variable is: " << boss::val << endl; // namespace variable
    
    return 0;
}