// function to determine leap year or not

#include <iostream>
using namespace std;
int leap(int n){
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                return 1;
            }
            else{
                return 0;
                }
        }
        else{
            return 1;
            }
    }

    else{
        return 0;
        }
}

int main(){
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if(leap(year)){
        cout << year << " is a leap year.";
        }

        else{
            cout << year << " is not a leap year.";
            }

}
    