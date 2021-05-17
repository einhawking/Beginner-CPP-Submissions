#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n,i;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Multiplication Table of "<<n<<":\n";

    for(i=1;i<=10;i++)
        cout<<n<<" * "<<i<<" = "<<i*n<<endl;

    return 0;
}

