// sum of digit

#include <iostream>
using namespace std;
int main(){
    int num,rem,sum=0;
    cout<<"Enter the number: ";
    cin>>num;

    while (num != 0)
    {
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    cout<<sum;
    
}