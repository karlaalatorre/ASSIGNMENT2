/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: Celcius to Fahrenheit conversion
 * Created on July 5, 2015, 1:49 PM
 */

//System Libraries
#include <iostream>// File I/O
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    float cels;//temperature in celsius
    float conv;//temperature converted to fahrenheit
   
    //Initialize values
    cout<<"Enter Temperature in Celsius: ";
    cin>>cels;
    
    //Process Inputs Here
    conv= (1.8*cels)+32;// conversion from celsius to fahreheit
    
    //Outputs Unknown Here
    cout<<cels<<" Celsius = "<<conv<<" Fahrenheit"<<endl;
    
    //Exit stage Right!
    

    return 0;
}

