#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;

    if(marks>=80)
        cout<<"Grade is A";
    else if(marks<80 && marks>=60)
        cout<<"Grade is B";
    else if(marks<60 && marks>=50)
        cout<<"Grade is C";
    else if(marks<50 && marks>=45)
        cout<<"Grade is D";
    else if(marks<45 && marks>=25)
        cout<<"Grade is E";
    else
        cout<<"Grade is F";

    return 0;

}
