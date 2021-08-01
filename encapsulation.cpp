/*
    Develped by Nay Oo Kyaw
    nayookyaw.nok@gmail.com
*/

#include <iostream>

using namespace std;

class Car {
    private:
        string brand;
        string model;
        int year;

    public:
        // constructor methods
        Car(){}

        Car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }

        string getModel() {
            return model;
        }
};

int main() {
    cout << "Program start.." << endl;

    Car carObj ("BMW", "X5", 2019);
    cout << "Car Model " + carObj.getModel() << "\n";

   return 0;
}