#include <iostream>
using namespace std;
int main(){
    int n;
    int a = 0;
    int b = 1;
    int nxt = a+b;
// 0 1 1 2 3 5 8...........
    cout<<"Enter a number: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cout<<" "<<a;
        nxt = a+b;
        a = b;
        b = nxt;
    }
    

return 0; 
}