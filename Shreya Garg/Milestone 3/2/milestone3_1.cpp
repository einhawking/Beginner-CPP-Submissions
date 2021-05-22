#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int base,exponent,i,multi=1;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter power: ";
    cin>>exponent;

    for(i=1;i<=exponent;i++)
        multi=multi*base;

    cout<<base<<" ^ "<<exponent<<" = "<<multi;

}
