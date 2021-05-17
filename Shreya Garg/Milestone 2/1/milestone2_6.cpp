#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int age1,age2,age3;
    cout<<"Enter age of 3 people: ";
    cin>>age1>>age2>>age3;

    if(age1>=age2){
        if(age1>=age3){
            cout<<age1<<" is oldest"<<endl;
            if(age2>=age3)
                cout<<age3<<" is youngest"<<endl;
            else
                cout<<age2<<" is youngest"<<endl;
            }

        else if(age3>=age1){
            cout<<age3<<" is oldest"<<endl;
            cout<<age2<<" is youngest"<<endl;
        }

    }

    else{
        if(age2>=age3){
            cout<<age2<<" is oldest"<<endl;
            if(age1>=age3)
                cout<<age3<<" is youngest"<<endl;
            else
                cout<<age1<<" is youngest"<<endl;
            }
        else{
            cout<<age3<<" is oldest"<<endl;
            cout<<age1<<" is youngest"<<endl;
        }

    }

    return 0;
}

