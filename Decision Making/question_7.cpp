// // program to calculate dearness allowance DA,
// 1--> basic salary <= 3500 then DA = 159% of the basic salary.
// 3--> basic salary > 3500 and salary <= 6000 then DA = 159% of the 3500 or 119% ,
// of the basic salary which is higher.
// 3--> otherwise DA = 119% of the 6000 or 103% of the basic salary which is higher.

#include <iostream> 
using namespace std;
int main(){
    double salary;
    double DA;
    cout<<"Enter your salary: ";
    cin>>salary;

    if (salary <= 3500)
    {
        DA = (salary/100)*159;
        cout<<"The Dearness Allowance DA is: "<<DA;
    }

    else if (salary > 3500 && salary <= 6000)
    {
        double DA_159, DA_119;
        DA_159 = (3500/100)*159;
        DA_119 = (salary/100)*119;

        if (DA_159 > DA_119){
            DA = DA_159;
            cout<<"The Dearness Allowance DA is: "<<DA;
            }

            else
            {
                DA = DA_119;
                cout<<"The Dearness Allowance DA is: "<<DA;
            }
    }

    else
    {
        double DA_119, DA_103;
        DA_119 = (6000/100)*119;
        DA_103 = (salary/100)*103;
        if (DA_119 > DA_103){
            DA = DA_119;
            cout<<"The Dearness Allowance DA is: "<<DA;
        }
        else
        {
            DA = DA_103;
            cout<<"The Dearness Allowance DA is: "<<DA;
        }
    }

}

    
    
    
