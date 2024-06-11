// write a program to check whater a 5 digit input number is,
// plaindrome or not, without using loop
// and also the reverse.

#include <iostream>
using namespace std;
int main(){
      int n,rem;
    int rev = 0;
    cout<<"Enter numbers: ";
    cin>>n;
    int pla = n;

    rem = n%10;
    rev = rem + (rev*10);
    n = n/10;

    rem = n%10;
    rev = rem + (rev*10);
    n = n/10;

    rem = n%10;
    rev = rem + (rev*10);
    n = n/10;

    rem = n%10;
    rev = rem + (rev*10);
    n = n/10;

    rem = n%10;
    rev = rem + (rev*10);
    n = n/10;


    
    if (rev ==  pla)
    {
        cout<<"The reverse of "<<pla<<" is "<<rev<<endl;
        cout<<"And the number is plaindrome.";
    }

    else
    {
        cout<<"The reverse of "<<pla<<" is "<<rev<<endl;
        cout<<"And the number is not a plaindrome.";
    }
    
    return 0;


}