// check odd and even in the array and priont their sum

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int odd=0;
    int even=0;
    int odd_sum = 0;
    int even_sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_sum+=arr[i];
            even++;
        }
        else{
            odd_sum+=arr[i];
            odd++;
        }
    }
    cout<<"Their are "<<odd<<" Odd number and their sum is: "<<odd_sum<<endl;
    cout<<"Their are "<<even<<" Odd number and their sum is: "<<even_sum<<endl;
    
}