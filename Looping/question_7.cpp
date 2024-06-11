#include <iostream>
using namespace std;
int main(){
    int n;
    int count = 2;

    cout<<"Enter a number: ";
    cin>>n;

    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            count = count + 1;
        }
        
    }

    if (count ==2)
    {
        cout<<"NUmber is prime";
    }
    else
    cout<<"Number is not prin";
    
    

return 0;    
}