#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int a,b,min=0,hcf=1;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    min=(a<b)?a:b;

    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0)
            hcf=i;
    }

    cout<<"HCF of "<<a<<" and "<<b<<" = "<<hcf;

    return 0;
}
