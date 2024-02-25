/*Write a C++ program given that there are two base classes namely class A and class B from which class C is inherited. The class A contains member function getBase() and reads “Base” value as user input from keyboard. Class B contains member function getHeight() and reads “Height” value as user input from keyboard. The derived class C inherits all the public members of A and B and computes the area of the triangle.*/

#include<iostream>
using namespace std;

class a{
    public:
    float Base;
    void getBase();
};

class b{
    public:
    float Height;
    void getHeight();
};

class c: public a, public b{
    float Area;
    public:
    void getArea();
};

void a::getBase(){
    cout<<"Enter Base: ";
    cin>>Base;
}

void b::getHeight(){
    cout<<"Enter Height: ";
    cin>>Height;
}

void c::getArea(){
    Area=Base*Height/2;
    cout<<"Base is "<<Base<<endl;
    cout<<"Height is "<<Height<<endl;
    cout<<"Area is "<<Area<<endl;
}

int main(){
    a a1;
    b b1;
    c c1;
    c1.getBase();
    c1.getHeight();
    c1.getArea();
    return 0;
}