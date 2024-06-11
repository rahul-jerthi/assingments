// to find the exponention of the 1st num by the second num

#include <iostream>
using namespace std;
int main(){
    int num,power;
    double result = 1;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the power: ";
    cin>>power;

    for (int i = 1; i <=power; i++)
    {
        result = result*num;
    }
    cout<<result;
    
}