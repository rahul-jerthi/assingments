// display odd and even in an array

#include <iostream>
using namespace std;
int main(){
    int size;
    int even = 0, odd = 0;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"The number of even numbers in the array is: "<<even<<endl;
    cout<<"The number of odd numbers in the array is: "<<odd<<endl;
}