#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int num,i,multi=1;
    cout<<"Enter number: ";
    cin>>num;

    for(i=1;i<=num;i++)
        multi=multi*i;

    cout<<"Factorial of "<<num<<" = "<<multi;

}
