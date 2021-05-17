#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int quantity, unit=100,price;
    float discount=0.1;

    cout<<"Enter quantity: ";
    cin>>quantity;

    price=unit*quantity;

    if(quantity>1000)
        cout<<"Total price is: "<<price-price*discount;
    else
        cout<<"Total price is: "<<price;

    return 0;
}
