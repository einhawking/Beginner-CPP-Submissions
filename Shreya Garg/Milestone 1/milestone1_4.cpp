#include<iostream>
using std::cout;
using std::cin;

int main(){

    int a;
    cout<<"Enter number: ";
    cin>>a;

    if(a<0)
        cout<<a<<" is negative";
    else if(a==0)
        cout<<a<<" is zero";
    else
        cout<<a<<" is positive";

    return 0;
}
