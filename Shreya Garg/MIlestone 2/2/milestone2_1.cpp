#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Natural Numbers from 1 to "<<n<<":\n";
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }

    return 0;
}
