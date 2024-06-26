// add two array into another array\

#include <iostream>
using namespace std;
int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {2,3,2,3,2};
    int arr3[5];
    
    for (int i = 0; i <5; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }
    
    
    
}