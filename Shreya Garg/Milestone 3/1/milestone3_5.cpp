#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n,n_ori,rem,product=1;
    cout<<"Enter number: ";
    cin>>n;
    n_ori=n;

    while(n!=0){
        rem=n%10;
        n=n/10;
        product=product*rem;
    }


    cout<<"Product of digits of "<<n_ori<<": "<<product;

    return 0;
}
