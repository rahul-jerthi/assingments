//Write a program to find smaller of the two given numbers 

#include <iostream>
using namespace std;
int main(){
    int num1, num2;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

    if (num1 == num2)
    {
        cout<<"Both the values are equal";
    }

    else if (num1 < num2)
    {
        cout<<"The number: "<<num1<<" is smaller then the number: "<<num2;
    }

    else
    {
        cout<<"The number: "<<num2<<" is smaller then the number: "<<num1;
    }

    return 0;
    
    
    
}