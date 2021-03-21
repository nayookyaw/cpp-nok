#include <iostream>
using namespace std;


int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number == 0) {
        cout << "You entered zero or non-integer \n";
    } else {
        cout << "You entered " << number;
    }   

    return 0;
}