//Write a program to find smallest of the three given numbers 

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    int smallest;

    if (num1 == num2 && num1 == num3)
    {
        cout << "All three numbers are equal";
        return 0;
    }
    
    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;

    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;

    } else {
        smallest = num3;
    }

  
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
