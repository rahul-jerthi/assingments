// function to return revrse..

#include <iostream>
using namespace std;

int rev_fun(int n){
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reverse of " << num << " is " << rev_fun(num) << endl;
}