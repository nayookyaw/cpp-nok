/*
    Develped by Nay Oo Kyaw
    nayookyaw.nok@gmail.com
*/

#include<iostream>

using namespace std;

int main() {
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend " << endl;
    cin >> dividend;

    cout << "Enter divisor " << endl;
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << "\n";
    cout << "Remainder = " << remainder <<endl;
     
    return 0;
}