// insert a value at a specific loaction in a array

#include <iostream>
using namespace std;
int main(){
    int n;
    int loc;
    int val;

    cout<<"Enter the size of aray: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the value to be inserted: ";
    cin>>val;

    cout<<"Enter the location: ";
    cin>>loc;
    
    for(int i=n-1;i>=loc;i--){
        arr[i+1]=arr[i];
    }
    arr[loc]=val;
    cout<<"The new array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}