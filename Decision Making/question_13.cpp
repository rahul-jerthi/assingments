// A company insures its driver in the following cases:--
// a--> if the driver is marries.
// b--> if the driver is unmaried, male and above 30 years old.
// c--> if the driver is unmarid, female and above 25 years old.

#include <iostream>
using namespace std;
int main(){
    int age;
    char ms,gender;

    cout<<"Enter the age: ";
    cin>>age;
    cout<<"Enter your gender (m/f): ";
    cin>>gender;
    cout<<"Enter your Married status (y/n): ";
    cin>>ms;

    if (ms=='y' || ms=='Y')
    {
        cout<<"The driver is Insured.";
    }

    else if ((ms=='n' || ms=='N') && (gender == 'M' || gender == 'n' ) && age > 30)
    {
        cout<<"The driver is Insured.";
    }

    else if ((ms=='n' || ms=='N') && (gender == 'f' || gender == 'F' ) && age > 25)
    {
        cout<<"The driver is Insured.";
    }

    else
    {
        cout<<"The driver is not Insured.";
    }
    
return 0;

    
    

}