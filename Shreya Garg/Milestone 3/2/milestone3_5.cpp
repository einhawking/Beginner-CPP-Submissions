#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int a,b,maxn=0,maxn_temp,lcm=0;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    maxn=(a>b)?a:b;
    maxn_temp=maxn;

    while(lcm==0){
        if(maxn%a==0 && maxn%b==0){
            lcm=maxn;
            break;
        }
        else
            maxn=maxn+maxn_temp;
    }

    cout<<"LCM of "<<a<<" and "<<b<<" = "<<lcm;
}
