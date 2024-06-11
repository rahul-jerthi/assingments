// //program to find number of days in month using switch statement


#include <iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter month number: ";
    cin>>month;
    switch(month){
        case 1:
        cout<<"31 days"<<endl;
        break;
        case 2:
        cout<<"28 days"<<endl;
        break;
        case 3:
        cout<<"31 days"<<endl;
        break;
        case 4:
        cout<<"30 days"<<endl;
        break;
        case 5:
        cout<<"31 days"<<endl;
        break;
        case 6:
        cout<<"30 days"<<endl;
        break;
        case 7:
        cout<<"31 days"<<endl;
        break;
        case 8:
        cout<<"31 days"<<endl;
        break;
        case 9:
        cout<<"30 days"<<endl;
        break;
        case 10:
        cout<<"31 days"<<endl;
        break;
        case 11:
        cout<<"30 days"<<endl;
        break;
        case 12:
        cout<<"31 days"<<endl;
        break;
        default :
        cout<<"Invlaid input";
        
    }

}