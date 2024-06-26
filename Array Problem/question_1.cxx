// Sum of elements in array

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int sum = 0;
    for (int i = 0; i <=7; i++)
    {
        sum += arr[i];
    }
    cout<<sum;
    
}