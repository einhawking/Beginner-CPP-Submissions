#include<iostream>
using std::cout;
using std::cin;

int main(){

    int a;
    cout<<"Enter number: ";
    cin>>a;

    if(a%2==0)
        cout<<a<<" is even";
    else
         cout<<a<<" is odd";
    return 0;
}
