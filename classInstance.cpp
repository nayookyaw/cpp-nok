/*
    Develped by Nay Oo Kyaw
    nayookyaw.nok@gmail.com
*/


#include <iostream>
#include<string>

using namespace std;

class MyClass {
    public:
        int myNum;
        string myString;
};

int main() {
    MyClass myObj;

    myObj.myNum = 25;
    myObj.myString = "Example Text";

    cout << "My Number " << myObj.myNum << "\n";
    cout << "My String " << myObj.myString << endl;

    return 0;
}