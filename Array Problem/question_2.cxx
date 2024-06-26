// finf avg. of array.

#include <iostream>
using namespace std;
int main(){
    int size;
    int arr[size];
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    float avg = (float)sum/size;
    cout << "Average of array is: " << avg << endl;
    
}