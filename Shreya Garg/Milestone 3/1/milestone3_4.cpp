#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n,n_ori,rem,sum=0;
    cout<<"Enter number: ";
    cin>>n;
    n_ori=n;

    while(n!=0){
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }


    cout<<"Sum of digits of "<<n_ori<<": "<<sum;

    return 0;
}
