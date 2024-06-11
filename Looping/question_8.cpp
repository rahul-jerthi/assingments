// print all aramstorng from 1to 1000


#include <iostream>
#include <cmath> // for the pow function
using namespace std;

int main() {
    cout << "Armstrong numbers from 1 to 1000 are: " << endl;

    for (int num = 1; num <= 1000; ++num) {
        int originalNum = num;
        int remainder, n = 0;
        double result = 0.0;


        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        
        if ((int)result == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
