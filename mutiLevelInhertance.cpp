/*
    Develped by Nay Oo Kyaw
    nayookyaw.nok@gmail.com
*/

#include <iostream>
using namespace std;

class Child {
    private:
        string name = "Nay Oo Kyaw";
    
    protected:
        string getChildName() {
            return name;
        }
    
};

class Parent: public Child {
    protected:
        string name = "Kyaw Oo Nay";
    
    public:
        string getName() {
            return getChildName();
        }
};

class GrandParent: public Parent {
    public:
        string name = "Oo Kyaw Nay";
    
};

int main () {
    GrandParent grandParent;
    cout << grandParent.name << endl;

    // call second inhertance class
    cout << grandParent.getName() << endl;

    return 0;
}