/*
    Develped by Nay Oo Kyaw
    nayookyaw.nok@gmail.com
*/

#include <iostream>

using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
    
        Car(string x, string y, int z);
};

Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}

int main() {
    cout << "Program starts..." << endl;
    Car carObj1("BMW", "X5", 2021);

    cout << "Brand - " + carObj1.brand << "\n";
    return 0;
}

