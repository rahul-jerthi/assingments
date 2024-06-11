// write a program which reads three sides of a given triangle and check,
// wheateher it is an isosceles triangle.


#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Enter the sides of the triangle"<<endl;
    cin>>a>>b>>c;

    if(a==b || b==c || c==a) //Every equilateral triangle is also isosceles
        cout<<"The triangle is isosceles"<<endl;

    else
        cout<<"The triangle is not isosceles"<<endl;

    return 0;
}