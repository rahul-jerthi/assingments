// //program to find number of days in month using if statement


#include <iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter month number: ";
    cin>>month;

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month == 10 || month == 12){
        cout<<"Number of days in month "<<month<<" is 31";
        }
        
    else if(month==4 || month==6 || month==9 || month==11){
            cout<<"Number of days in month "<<month<<" is 30";
        }

    else if(month==2){
            cout<<"Number of days in month "<<month<<" is 28 or 29";
        }
        
     else {
            cout<<"Invalid month number";
            }
    }


