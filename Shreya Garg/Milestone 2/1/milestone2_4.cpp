#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int salary,years_service;
    float bonus=0.05;
    cout<<"Enter salary and years of service: ";
    cin>>salary>>years_service;


    if(years_service>5)
        cout<<"Net Bonus is: "<<salary*bonus;
    else
        cout<<"No Bonus as the years of service<=5 ";

    return 0;
}

