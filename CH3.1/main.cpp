/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: Miles per Gallon
 * Created on July 1, 2015, 5:58 PM
 */

//System Libraries
#include <iostream> //File I/O
using namespace std;//std namespace -> iostream

//User Libraries

//Global Constants


//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables Here
    int miles;
    int gllns;
    int mlge;
    
    cout<<"Miles car can drive with full tank: "<<endl;
    cout<<"Miles: ";
    cin>>miles;
    cout<<"Gallons fuel tank can hold: "<<endl;
    cout<<"Gallons: ";
    cin>>gllns;
    mlge=(miles/gllns);
    cout<<"Your car can drive "<<mlge<<" Miles per gallon"<<endl;
    
      
   
    
    //exit stage right!
    
    
    return 0;
}