// write a program which reads the three side of a triangle and check,
// whether the triangle is equlitrial or not.


#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Enter the three side of a triangle"<<endl;
    cin>>a>>b>>c;



    if(a==b && b==c && c==a)
        cout<<"The triangle is equilateral"<<endl;
   
    else
        cout<<"The triangle is not a equlitrial"<<endl;

    return 0;
    }
