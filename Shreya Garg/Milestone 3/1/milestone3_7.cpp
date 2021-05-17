#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n,n_ori,rem,rev=0;
    cout<<"Enter number: ";
    cin>>n;
    n_ori=n;

    while(n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }

    if(rev==n_ori)
        cout<<n_ori<<" is a palindrome";
    else
        cout<<n_ori<<" is not a palindrome";

    return 0;
}
