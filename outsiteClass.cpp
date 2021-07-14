/*
    Develped by Nay Oo Kyaw
    nayookyaw.nok@gmail.com
*/

#include <iostream>
using namespace std;

class Car
{
private:
    /* data */
public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed)
{
    return maxSpeed;
};

int main() {
    Car car;

    cout << "Car speed : " << car.speed(200) << "\n"; 

    return 0;
}

