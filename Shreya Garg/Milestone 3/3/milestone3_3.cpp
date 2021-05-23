#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n,flag=true,sum=0;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Sum of prime numbers between 1 to "<<n<<": ";

    if(n==2 || n==1)
           cout<<"None";

    else{
        for(int i=2;i<n;i++){
            for(int j=2;j<i;j++){
                if(i%j==0){
                    flag=false;
                    break;
                }
                else
                    flag=true;

            }
            if(flag==true)
                sum=sum+i;
        }
    }

    cout<<sum;




    return 0;
}

