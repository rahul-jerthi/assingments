// to find hcf

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers to find their HCF: ";
    cin >> num1 >> num2;

    int a = num1, b = num2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;

    cout << "HCF of " << num1 << " and " << num2 << " is " << gcd << endl;

    return 0;
}
