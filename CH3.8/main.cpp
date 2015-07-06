/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: Change currency from US dollars to Yens and Euros
 * Created on July 5, 2015, 3:02 PM
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
    const float yenpd=122.37;//current yens per dollar
    const float europd=0.91;//current euro per dollar
    float dllrs;//dollars wanteing to change currency
    float yens;// equal yens
    float euro;//equal euro
    
    //Initialize values
    cout<<"Enter Amount of Dollars: $";
    cin>>dllrs;
            
    //Process Inputs Here
    
    yens= dllrs*yenpd;
    euro= dllrs*europd;
   
    //Outputs Unknown Here
    cout<< setprecision(2)<<fixed;
    cout<<"$"<<dllrs<<" = "<<yens<<" Yens."<<endl;
    cout<<"           "<<euro<<" Euros."<<endl;
    
    //Exit stage Right!
    

    return 0;
}

