// function to find number of digit in it

#include <iostream>
using namespace std;
int digi(int num){
    int count = 0;
    while(num != 0){
        num /= 10;
        count++;
    }
    return count;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of digits in " << num << " is " << digi(num);
    

}