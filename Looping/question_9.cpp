// print all prime number from 1 to 1000


#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers from 1 to 1000 are: " << endl;

    for (int num = 2; num <= 1000; ++num) {
        bool isPrime = true;

        
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        
        if (isPrime == true) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
