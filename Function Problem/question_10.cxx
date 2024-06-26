//  program to count how muxh time the function is called

#include <iostream>
using namespace std;
int funCount(){
    static int count = 0; // static variable to keep track of function calls
    count++;
    cout << "Function called " << count << " times." << endl;
    // return n*n;
    return 0;
}
int main(){
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << "Square of " << num << " is " << funCount(num) << endl
    // << "Square of " << num << " is " << funCount(num) << endl
    // << "Square of " << num << " is " << funCount(num) << endl;

    funCount();
    funCount();
    funCount();
    funCount();
    funCount();
    funCount();

}