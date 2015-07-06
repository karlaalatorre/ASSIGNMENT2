/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: Calculate the property tax
 * Created on July 5, 2015, 6:37 PM
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
    double value;//property value
    double tax;//property tax
    double asval;//assesment value is 60% of property value
    
    //Initialize values
    cout<<"Enter value of the property's piece: ";
    cin>>value;
            
    //Process Inputs Here
    asval= value*0.6;
    tax= (asval/100)*0.75;
   
    //Outputs Unknown Here
    cout<< setprecision(2)<<fixed;
    cout<<" "
            " "
            " "
            ""
            ""
            ""<<endl;
    cout<<"Assesment value of the property: $"<<asval<<endl;
    cout<<"Property Tax:                    $"<<tax<<endl;
    
    //Exit stage Right!
    

    return 0;
}

