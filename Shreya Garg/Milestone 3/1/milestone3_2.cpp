#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n,first,last,n_ori,rem,i=0;
    cout<<"Enter number: ";
    cin>>n;
    n_ori=n;

    while(n!=0){
        rem=n%10;
        n=n/10;
        if(i==0)
            last=rem;
        i++;
    }
    first=rem;

    cout<<"Sum of first and last digit of "<<n_ori<<": "<<first+last;

    return 0;
}

