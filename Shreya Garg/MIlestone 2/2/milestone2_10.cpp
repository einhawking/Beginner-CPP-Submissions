#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n,n_ori,i,counter=0;
    cout<<"Enter number: ";
    cin>>n;
    n_ori=n;

    while(n!=0){
        n=n/10;
        counter++;
    }

    cout<<"Number of digits of "<<n_ori<<"= "<<counter;
    return 0;
}


