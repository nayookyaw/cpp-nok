/*
    Develped by Nay Oo Kyaw
    nayookyaw.nok@gmail.com
*/

#include <iostream>

using namespace std;

class ArrayClass {

};

int main () {
    string cars[4] = { "Volvo", "BMW", "Ford", "Mazda"};

    for (int i=0 ; i < sizeof(cars); i++) {
        cout << cars[i] << endl;
    }
    
    return 0;
}
