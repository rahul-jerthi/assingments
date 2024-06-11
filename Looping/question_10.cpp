// to find lcm




#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers to find their LCM: ";
    cin >> num1 >> num2;

    int a = num1, b = num2;

    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;

  
    int lcm = (num1 * num2) / gcd;

    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}
