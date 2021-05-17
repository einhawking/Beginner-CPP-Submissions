#include<iostream>
#include<math.h>
using std::cout;
using std::cin;

int main()
{
    int n,digits,n_ori,rem,rev=0,flag=0,counter=0;
    cout<<"Enter number: ";
    cin>>n;
    n_ori=n;

    digits=ceil(log10(n));

    while(n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }

    digits=digits-log10(rev);
    n=rev;

    while(n!=0){
        rem=n%10;

        switch(rem){

        case 0:
            if(rem==0)
                cout<<"Zero ";
                break;
        case 1:
            if(rem==1)
                cout<<"One ";
                break;
        case 2:
            if(rem==2)
                cout<<"Two ";
                break;
        case 3:
            if(rem==3)
                cout<<"Three ";
                break;
        case 4:
            if(rem==4)
                cout<<"Four ";
                break;
        case 5:
            if(rem==5)
                cout<<"Five ";
                break;
        case 6:
            if(rem==6)
                cout<<"Six ";
                break;

        case 7:
            if(rem==7)
                cout<<"Seven ";
                break;
        case 8:
            if(rem==8)
                cout<<"Eight ";
                break;

        case 9:
            if(rem==9)
                cout<<"Nine ";
                break;
        }

        n=n/10;
    }
    while(digits)
    {
        cout<<"Zero ";
        digits--;
    }

    return 0;
}
