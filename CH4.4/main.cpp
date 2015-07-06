/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: Mass and weight: calculate an object's weight knowing it mass
 * Created on July 5, 2015, 8:01 PM
 */

#include <iostream>// Iostream I/O
using namespace std;

//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables here
    float mass;//object's mass in kilograms
    float wgth;//object's weight in NEWTONS
    //Input values here
    cout<<"Enter an object's mass in kilograms: "<<endl;
    cin>>mass;
    wgth = mass * 9.8;//calculation for weight in newtons 
  
    //Process Input here
    cout<<" "
            " "
            " "<<endl;
    if(wgth>1000)
    {
        cout<<"The object's mass is "<<wgth<<" Newtons."<<endl;
        cout<<"The object is too heavy!"<<endl;
    }
    if(wgth<10)
    {
        cout<<"The object's mass is "<<wgth<<" Newtons."<<endl;
        cout<<"The object is too light!"<<endl;
    }
    if(wgth>=10&&wgth<=1000)
    {
        cout<<"The object's mass is "<<wgth<<" Newtons."<<endl;
    }

    
    return 0;
}

