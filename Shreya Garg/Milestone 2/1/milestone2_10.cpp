#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x=2,y=5,z=0;
    cout<<(x==2)<<endl
        <<(x!=5)<<endl
        <<(x!=5 && y>=5)<<endl
        <<(z!=0 || x==2)<<endl
        <<(!(y<10));
}
