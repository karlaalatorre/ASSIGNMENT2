/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: Time calculator
 * Created on July 5, 2015, 8:11 PM
 */

#include <iostream>// Iostream I/O
#include <iomanip>
using namespace std;

//User Libraries
 
//Global constants
 
//Function Prototypes
    //There are 60 seconds in a minute, 3600 in an hour and 86400 in a day.
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables here
    float scnds;//seconds typed by the user
    
    //Input values here
    //Process Input here
    cout<< setprecision(2) <<fixed;
    cout<<"Enter the number of seconds: "<<endl;
    cin>>scnds;
    
    if(scnds>=86400)
        cout<<scnds<<" seconds are equal to "<<(scnds/86400)<<" days."<<endl;
    else 
    { 
        if (scnds>=3600)
    
        { cout<<scnds<<" seconds are equal to "<<(scnds/3600)<< " hours."<<endl;
        }
    else
    {
     if(scnds>=60)
     { cout<<scnds<<" seconds are equal to "<<(scnds/60)<<" minutes."<<endl;
     }
    else
    {
     if(scnds<60&&scnds>0)
     {cout<<scnds<<" seconds are equal to "<<scnds<<" seconds."<<endl;
     }}
    }
    }
        
    
    
    //Outputs unknown here
    return 0;
}

