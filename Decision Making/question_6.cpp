#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int sec_small;

      if (num1 == num2 && num1 == num3)
    {
        cout << "All three numbers are equal";
        return 0;
    }

    if ((num1 <= num2 && num1 >= num3) || (num1 >= num2 && num1 <= num3)) {
        sec_small = num1;
    } else if ((num2 <= num1 && num2 >= num3) || (num2 >= num1 && num2 <= num3)) {
        sec_small = num2;
    } else {
        sec_small = num3;
    }

    cout << "The second smallest number is: " << sec_small << endl;

    return 0;
}
