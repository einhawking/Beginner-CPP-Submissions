#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Natural Numbers from "<<n<<" to 1:\n";
    int i=n;
    while(n>=i && i>0){
        cout<<i<<" ";
        i--;
    }

    return 0;
}

