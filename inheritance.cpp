/*
    Develped by Nay Oo Kyaw
    nayookyaw.nok@gmail.com
*/

#include <iostream>
using namespace std;

class Vehicle {
    protected:
        string brand = "BMW";
    
    public:
        void showVehicle() {
            cout << "Show vechile" << "\n";
        }

        string getBrand() {
            return brand;
        }

};

class Car: public Vehicle {
    private:
        string model = "X-20";
    
    public:
        void showBrand() {
            cout << brand << endl;
        }
};

int main() {
    Car car;
    car.showVehicle();

    car.showBrand();

    return 0;
}