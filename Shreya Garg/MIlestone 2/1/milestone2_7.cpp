#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    if(n>=0)
        cout<<"Absolute value is "<<n;
    else
        cout<<"Absolute value is "<<n*-1;

    return 0;
}
