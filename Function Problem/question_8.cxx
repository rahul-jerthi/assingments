// sum of series using recursion
// 1+3+5+7+9.....

#include <iostream>
using namespace std;
int sum_series(int n){
    if(n==1)
    return 1;
    else
    return (2*n-1)+sum_series(n-1);

}

int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<sum_series(n);

}

