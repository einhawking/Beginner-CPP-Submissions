#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    float classes_held,classes_attended,percentage;
    char medical;

    cout<<"Enter the number of classes held and number of classes attended: ";
    cin>>classes_held>>classes_attended;

    percentage=(classes_attended/classes_held)*100;

    if(percentage>=75){
        cout<<"Percentage of classes attended "<<percentage<<"%"<<endl;
        cout<<"Allowed to sit in exam";
    }
    else{
        cout<<"Do you have a medical cause? (Y/N): ";
        cin>>medical;

        if(medical=='Y'){
        cout<<"Percentage of classes attended "<<percentage<<"%"<<endl;
        cout<<"Allowed to sit in exam";
        }

        else{
        cout<<"Percentage of classes attended "<<percentage<<"%"<<endl;
        cout<<"Not allowed to sit in exam";
        }
    }

    return 0;

}


