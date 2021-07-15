/*
    Develped by Nay Oo Kyaw
    nayookyaw.nok@gmail.com
*/

#include <iostream>
#include<string>

using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;

    public:
        Car() {
            cout << "running contructor" << "\n";
        }

};

int main() {
    Car car;

    car.brand = "BMW";
    cout << car.brand << endl;

    return 0;
}