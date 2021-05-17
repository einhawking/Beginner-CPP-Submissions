#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n,rem,rev=0;
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;

    cout<<"Enter number: ";
    cin>>n;

    while(n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;

        switch(rem){
        case 0:
            zero++;
            break;
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        case 7:
            one++;
            break;
        case 8:
            nine++;
            break;
        case 9:
            nine++;
            break;
        }
    }

    cout<<"Frequency of zero: "<<zero<<endl
        <<"Frequency of one: "<<one<<endl
        <<"Frequency of two: "<<two<<endl
        <<"Frequency of three: "<<three<<endl
        <<"Frequency of four: "<<four<<endl
        <<"Frequency of five: "<<five<<endl
        <<"Frequency of six: "<<six<<endl
        <<"Frequency of seven: "<<seven<<endl
        <<"Frequency of eight: "<<eight<<endl
        <<"Frequency of nine: "<<nine<<endl;

    return 0;
}
