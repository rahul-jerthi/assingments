#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    double x, sum = 0.0;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        double term = pow(x, i);
        cout << term<<" ";
        sum += term;
    }

    cout << endl << "The sum of the series is: " << sum << endl;

    return 0;
}