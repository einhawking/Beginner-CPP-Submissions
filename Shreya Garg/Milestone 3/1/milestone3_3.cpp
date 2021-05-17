#include<iostream>
#include<math.h>
using std::cout;
using std::cin;

int main()
{
    int n,first,last,n_ori,rem,i=-1,rev=0;
    cout<<"Enter number: ";
    cin>>n;
    n_ori=n;

    while(n!=0){
        rem=n%10;
        n=n/10;

        if(i==-1)
            last=rem;
        i++;

        if(rem!=0)
            first=rem;
    }

    rev=n_ori - first*pow(10,i) - last+1;
    rev=last*pow(10,i) + rev + first ;
    cout<<"Swapped first and last digits of "<<n_ori<<": "<<rev;

    return 0;
}
