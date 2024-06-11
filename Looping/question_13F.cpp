// genrate series and print the sum
// 3 + 5 + 9 + 15 +........

#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    
    cout << "Enter the number of terms: ";
    cin >> n;

    int term = 3;
    for (int i = 1; i <=n; i++)
    {
        cout<<term<<" ";
        sum += term;
        term = term + 2*i;


    }
    cout<<endl;
    cout<<sum;

}