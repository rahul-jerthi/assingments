//Write a program to check to check wheather given number is odd or even.

#include <iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    if (num == 0){
        cout<<"The given number is zero.";
    }

    else if(num%2==0){
        cout<<"The number "<<num<<" is a even number.";
    }

    else{
        cout<<"The number "<<num<<" is a odd number.";
    }


    return 0;


    
}