// //input cost price and selling price
// check user made profit or lose
// and also how much percent loss and profit


#include <iostream>
using namespace std;
int main(){
    float cp,sp,profit,loss;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;

    if(sp>cp){
        profit=sp-cp;
        cout<<"Profit: "<<profit<<endl;
    }

        else if(sp<cp){
            loss=cp-sp;
            cout<<"Loss: "<<loss<<endl;
        } 
    
    
    
    
    }