/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: BANK CHARGES
 * Created on July 5, 2015, 9:09 PM
 */

#include <iostream>// Iostream I/O
#include <iomanip>//for .00
using namespace std;

//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables here
    int checks;//checks 
    float begbal;//beginning balance
    float feeone;//fee number one
    float feetwo;//second fee
    float totfee;//total amount of fees
    
    //Input values here
    cout<<"Enter beginning balance: $";
    cin>>begbal;
    cout<< setprecision(2)<< fixed;
    if(begbal<0)
        cout<<"URGENT MESSAGE! YOUR ACCOUNT IS OVERDROWN!"<<endl;
    else{
        cout<<"Enter number of checks written: ";
        cin>>checks;
        
        if(begbal<400)
            feeone=15.00;
        else
            feeone=0.00;
        if(checks>=0&&checks<20)
            feetwo=(checks*.10);
        if(checks>=20&&checks<=39)
            feetwo=(checks*.08);
        if(checks>=40&&checks<=59)
            feetwo=(checks*.06);
        if(checks>=60)
            feetwo=(checks*.04);
        if(checks<0)
            cout<<"The number of checks cannot be NEGATIVE!"<<endl;
        
        totfee=feeone+feetwo;
        cout<<" "
                " "
                " "
                ""<<endl;
        cout<<"MONTHLY FEES"<<endl;
        cout<<"Low Balance Fee:    $"<<feeone<<endl;
        cout<<"Check Fees:         $"<<feetwo<<endl;
        cout<<"Total Monthly fees: $"<<totfee<<endl;
        
    }
  
    return 0;
}

