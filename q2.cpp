/*Write a C++ program, consider that there are two base classes namely class StudentsDetails and class Marks from which class C is inherited. The class A contains member function getDetails() that reads “students name”, “Enrollment number” value as user input from keyboard. Class B contains member function getMarks() and reads “5 subject marks” value as user input from keyboard. The derived class C inherits all the public members of A and B and computes the area of the triangle.

SAMPLE OUTPUT:
enter value of name: JOHN
enter value of eno.: JOHN123
enter value of marks [0] 89
enter value of marks [1] 78
enter value of marks [2] 67

enter value of marks [3] 86
enter value of marks [4] 57
Total = 377*/

#include <iostream>
#include <cstring>
using namespace std;

class StudentsDetails{
    public:
    string name;
    long enrno;
    void getDetails();
};

class Marks{
    public:
    float m[5];
    void getMarks();
};

class c: public StudentsDetails, public Marks{
    public:
    void showMarks();
};

void StudentsDetails::getDetails(){
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Enter enrollment number: ";
    cin>>enrno;
}

void Marks::getMarks(){
    for (int i=0;i<5;i++){
        cout<<"Enter marks of subject no. "<<i+1<<": ";
        cin>>m[i];
    }
}

void c::showMarks(){
    int total=0;
    for (int i=0;i<5;i++){
        total+=m[i];
    }
    cout<<name<<" scored a total of "<<total;
}

int main(){
    StudentsDetails s1;
    Marks m1;
    c c1;
    c1.getDetails();
    c1.getMarks();
    c1.showMarks();
    return 0;
}