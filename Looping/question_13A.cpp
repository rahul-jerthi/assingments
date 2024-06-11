// genrate series and print the sum
// 1 + 4 + 9 + 16 +........

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "The series is: ";
    for (int i = 1; i <= n; ++i) {
        int term = i * i;  
        cout << term << " ";  
        sum += term;  
    }

    cout << endl;
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
