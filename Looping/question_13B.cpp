// genrate series and print the sum
// 4 + 12 + 36 + 108 +........


#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "The series is: ";
    long long term = 4;
    for (int i = 1; i <= n; ++i) {
        cout << term << " ";  
        sum += term;  
        term *= 3;  
    }

    cout << endl;
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
