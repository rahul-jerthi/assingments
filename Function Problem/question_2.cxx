//  if prime return 1 || not prime return 0

#include <iostream>
using namespace std;
int prime(int num){
    if(num <= 1){
    return 0;
        }
        for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
        return 0;
        }
    }
    return 1;
}
                
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(prime(num)){
        cout << num << " is a prime number";
        }
    else{
        cout << num << " is not a prime number";
        }
    return 0;
}