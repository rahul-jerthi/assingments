// function to determine the number is armstrong or not 

#include <iostream>
using namespace std;
int isArm(int num){
    int sum = 0, temp = num;
    while(temp != 0){
        int digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp /= 10;
        }
    if(sum == num){
        return 1;
        }
    else{
        return 0;
       }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if (isArm(num))
    {
        cout<<"Number is armstrong";
    }
    else
    cout<<"Number is not armstrong";

    
}