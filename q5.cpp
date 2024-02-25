/*Write a C++ program to show the functionality of the abstract classes.

Output :
This is Display1() method of Derived Class
This is Display2() method of Derived Class
*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual void Display1() = 0;
    virtual void Display2() = 0;
};
class Derived : public Base {
public:
    void Display1() override {
        cout << "This is Display1() method of Derived Class" << endl;
    }

    void Display2() override {
        cout << "This is Display2() method of Derived Class" << endl;
    }
};

int main() {
    Derived d;
    d.Display1();
    d.Display2();
    return 0;
}
