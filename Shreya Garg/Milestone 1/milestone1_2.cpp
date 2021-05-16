#include<iostream>

using std::cout;
using std::cin;

int main(){

    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    if(a>b)
        cout<<a<<" is the maximum";
    else
        cout<<b<<" is the maximum";
    return 0;
}
