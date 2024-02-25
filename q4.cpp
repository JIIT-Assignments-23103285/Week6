//Given a snippet of the program to create a base class named as base_food_Items with a virtual function named as order and total_Price . Create a derived class name Chinese. Then calculate the total_price of food items based on variables quantity and item_price.

#include <iostream>
using namespace std;

class base_food_items {
    public:
    char item_name[20];
    int quantity;
    int item_price;
    public:
    virtual void order()
    {
        cout << "enter item name:";
        cin>> item_name;
        cout << "enter quantity";
        cin>> quantity;

        cout << "Item price";
        cin >> item_price;
    }
    void total_price()
    {
        cout<<"order is: " << item_name<<"\t"<<"quantity:"<<quantity<<endl;
        cout << "total price=" << item_price*quantity<<endl;
    }
};

class chinese: public base_food_items{};

int main(){
    chinese c1;
    c1.order();
    c1.total_price();
}