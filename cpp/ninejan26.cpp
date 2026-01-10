//write a program in cpp to input the value of dividend and divisor and find the quotient and remainder.

#include <iostream>
using namespace std;
int main () {
    int divisor, divident, quotient, remainder;
    cout << "Enter the value of divident: ";
    cin >> divident;
    cout << "Enter the value of divisor: ";
    cin >> divisor;
    quotient = divident / divisor;
    remainder = divident % divisor;
    cout << "The quotient is: " << quotient << endl;
    cout << "The remainder is: " << remainder << endl;
    return 0;
}