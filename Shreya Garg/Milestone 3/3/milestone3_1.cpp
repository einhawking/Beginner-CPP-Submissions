#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n,flag=true;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }

    if(flag==false || n==1)
        cout<<n<<" is not prime";
    else
        cout<<n<<" is prime";

    return 0;
}
