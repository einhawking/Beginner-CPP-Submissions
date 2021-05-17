#include<iostream>
using std::cout;
using std::cin;

int main()
{
    cout<<"Even numbers between 1 to 100\n";

    int i=1;
    while(i<100){
            if(i%2==0)
                cout<<i<<" ";
        i++;
    }

    return 0;
}
