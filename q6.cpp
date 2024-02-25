/*
Write a program to use constructors of the abstract class to find the sum of two numbers and display the results.
*/

#include <iostream>
using namespace std;

class base{
    public:
    int x;
    int y;
    base(){
        x=0;
        y=0;
    }
    base(int a, int b){
        x=a;
        y=b;
    }
    virtual void add()=0;
};

class derived: public base{
    public:
    derived(): base() {};
    derived(int a, int b): base(a,b) {};
    void add(){
        cout<<x+y;
    }
};

int main(){
    base *ptr;
    derived d(1,2);
    ptr=&d;
    ptr->add();
    return 0;
}