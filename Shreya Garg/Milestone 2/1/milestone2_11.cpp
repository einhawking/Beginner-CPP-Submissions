#include<iostream>
using std::cout;
using std::cin;

int main()
{
    char l;
    cout<<"Enter letter: ";
    cin>>l;

    if(l>='A' && l<='Z')
        cout<<l<<" is a uppercase letter";
    else if(l>=97 && l<=122)
        cout<<l<<" is a lowercase letter";
    else
        cout<<l<<" is not a letter";

    return 0;
}
