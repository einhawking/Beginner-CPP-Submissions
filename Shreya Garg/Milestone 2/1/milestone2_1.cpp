#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int length,breadth;
    cout<<"Enter Length and Breadth: ";
    cin>>length>>breadth;

    (length==breadth) ? cout<<"It is a square" : cout<<"It is a rectangle";
    return 0;
}
