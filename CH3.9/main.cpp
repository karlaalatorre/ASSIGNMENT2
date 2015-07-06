/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: calculate the monthly expenses for a car
 * Created on July 5, 2015, 6:07 PM
 */

//System Libraries
#include <iostream>// File I/O
#include <iomanip>
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    double loanp;//monthly loan paqyment
    double insrn;//insurance payment
    double gas;//monthly payment for gas
    double oil;//monthly payment for oil
    double tires;//monthly payment for tires
    double mntnc;//monthly payment for maintenance
    double moncos;//monthly total cost
    double ancos;//annual total cost
    
    //Initialize values
    cout<<"Enter your monthly loan payment: ";
    cin>>loanp;
    cout<<"Enter your monthly insurance: ";
    cin>>insrn;
    cout<<"Enter your monthly gas expense: ";
    cin>>gas;
    cout<<"Enter your monthly oil expenses: ";
    cin>>oil;
    cout<<"Enter your monthly tires expenses: ";
    cin>>tires;
    cout<<"Enter your monthly maintenance expenses: ";
    cin>>mntnc;
            
    //Process Inputs Here
    moncos= loanp+insrn+gas+oil+tires+mntnc;
    ancos=moncos*12;
   
    //Outputs Unknown Here
    cout<< setprecision(2)<<fixed;
    cout<<" "
            " "
            " "
            ""
            ""
            ""<<endl;
    cout<<"Your monthly expenses are: $"<<moncos<<endl;
    cout<<"Your annual expenses are:  $"<<ancos<<endl;
    
    //Exit stage Right!
    

    return 0;
}

