// Count positive, negative, and zeros in the array

#include <iostream>
using namespace std;
int main(){
    int size;
    int po_count = 0, ne_count = 0, ze_count = 0;
    
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];


    cout<<"Enter "<<size<<" elements: ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < size; i++){
        if(arr[i] > 0){
            po_count++;
            }

        else if(arr[i] < 0){
                ne_count++;
                }
        else{
            ze_count++;
            }

    }
    cout<<"Positive numbers: "<<po_count<<endl;
    cout<<"Negative numbers: "<<ne_count<<endl;
    cout<<"Zero numbers: "<<ze_count<<endl;


}