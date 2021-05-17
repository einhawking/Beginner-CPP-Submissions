#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n,i,sum=0;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Sum of odd numbers between 1 to "<<n<<":\n";

   for(i=1;i<=n;i++){
    if(i%2!=0)
      sum=sum+i;
   }

   cout<<"Sum is: "<<sum;
    return 0;
}
