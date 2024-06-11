// write a program to find out wheather the input char is a vowel or not.
// using if statement

#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
   
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<ch<<" is a vowel"<<endl;
    }

    
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<ch<<" is a vowel"<<endl;
    }

    else
    {
        cout<<ch<<" is not a vowel"<<endl;
        }
}