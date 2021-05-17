#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;

    (a>b) ? cout<<a<<" is larger" : cout<<b<<" is larger";
    return 0;
}
