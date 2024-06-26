// Function to check number is plaindrome or not

#include <iostream>
using namespace std;
int plaindrome(int n){
    int rev = 0, temp = n;
    while(temp != 0){
        rev = rev * 10 + temp % 10;
        temp /= 10;
        }
    if(rev == n){
        return 1;
        }

    else{
        return 0;
        }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin>>num;
    if(plaindrome(num)){
        cout << "Number is plaindrome";
        }
    else{
        cout << "Number is not plaindrome";
    }    

}