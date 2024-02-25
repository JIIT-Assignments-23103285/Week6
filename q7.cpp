#include<iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {}
};

class Derived: public Base {};

int main() {
    Base *base_ptr = new Derived;
    Derived *derived_ptr = dynamic_cast<Derived*>(base_ptr);
    if(derived_ptr != NULL)
        cout << "It is working";
    else
        cout << "cannot cast Base* to Derived*";
    delete base_ptr;
    return 0;
}

//It is working
