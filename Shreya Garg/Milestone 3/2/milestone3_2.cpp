#include<iostream>
using std::cin;
using std::cout;

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"Factors of "<<num<<": ";
    for(int i=1;i<=num;i++){
        if(num%i==0)
            cout<<i<<" ";
        else
            continue;
    }
    return 0;
}
