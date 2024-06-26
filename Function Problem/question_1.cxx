// function to calculate power of a^b   power(a,b)

#include <iostream>
using namespace std;

int fun_power(int a, int b){
    int result = 1;
    for(int i = 0; i < b; i++){
        result *= a;
        }
    return result;
}

int main(){
    int base, power;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;
    cout << "Result: " << fun_power(base, power) << endl;
}  

