// function to find maximum out of three float numbers

#include <iostream>
using namespace std;
float maxNum(float a, float b, float c){
    if(a >= b && a >= c)
    return a;
    else if(b >= a && b >= c)
    return b;
    else
    return c;

}

int main(){
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Maximum number is: " << maxNum(a, b, c);
}