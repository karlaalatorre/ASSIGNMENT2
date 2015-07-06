/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: BMI CALCULATOR
 * Created on July 5, 2015, 7:46 PM
 */

#include <iostream>// Iostream I/O
using namespace std;

//User Libraries
 
//Global constants

 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables here
    float lbs;//weight in pounds
    float inch;//height in inches
    float BMI;//BMI = weight*703/height^2
    
    //Input values here
    cout<<"Enter your weight in pounds: "<<endl;
    cin>>lbs;
    cout<<"Enter your height in inches: "<<endl;
    cin>>inch;
    BMI=(lbs*703)/(inch*inch);
  
    //Process Input here
    if(BMI<18.5)
        cout<<"You are underweight!"<<endl;
    if(BMI>=18.5&&BMI<=25)
        cout<<"You have an optimal weight."<<endl;
    if(BMI>25)
        cout<<"You are overweight!"<<endl;
    
   
    //Outputs unknown here
   
    return 0;
}

