// write a program which reads three sides of a trinagle,
// check wheather the trianlge is right angle or not.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter the three sides of the triangle"<<endl;
    cin>>a>>b>>c;

    if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==b*b+a*a)
        cout<<"The triangle is right angle"<<endl;

    else
        cout<<"The triangle is not right angle"<<endl;

    return 0;

}