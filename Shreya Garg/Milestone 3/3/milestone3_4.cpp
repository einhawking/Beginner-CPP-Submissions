#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int n,flag=true;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Prime factors of "<<n<<": ";
    if(n==1)
        cout<<"None";
    else{
        for(int i=2;i<=n;i++){
            if(n%i==0){
                for(int j=2;j<i;j++){
                    if(i%j==0){
                        flag=false;
                        break;
                    }
                    else
                        flag=true;
                }
                if(flag==true)
                    cout<<i<<" ";
            }
        }
    }

    return 0;
}
