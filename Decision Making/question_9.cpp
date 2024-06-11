// write a program which reads the three sides of a given triangle and calculate its area.
// The program should check whether the triangle is valid or not. If the triangle is not valid,
// the program should print an message and terminate. If the triangle is valid, the program
// should calculate its area and print it.


#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Enter the three sides of the triangle: "<<endl;
    cin>>a>>b>>c;

    if(a+b>c && b+c>a && a+c>b){
        double s=(a+b+c)/2;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"The area of the triangle is: "<<area<<endl;
        }

    else{
        cout<<"The triangle is not valid"<<endl;
        }

    return 0;    

}
