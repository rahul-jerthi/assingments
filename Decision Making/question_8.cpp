// write a program to check wheater the number is positive, negative or zero.


#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num==0){
        cout<<"The number is zero.";
        // return 0;
    }

    else if (num < 0)
    {
        cout<<"The number is negative.";

    }

    else
    {
        cout<<"The number is positive.";
    }
    

return 0;
    

}