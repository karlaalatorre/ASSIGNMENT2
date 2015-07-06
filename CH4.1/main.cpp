/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 *
 * Created on July 5, 2015, 7:22 PM
 */

#include <iostream>// Iostream I/O
using namespace std;

//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables here
    int day;//day typed by the user
    int month;//month typed by the user
    int year;//year typed by the user
    
    //Input values here
    cout<<"Enter the number of a month (Ex. January = 1): ";
    cin>>month;
    cout<<"Enter a day (1-31): ";
    cin>>day;
    cout<<"Enter a two-digit year: ";
    cin>>year;
    
    if(month*day==year)
        cout<<"The date is MAGIC!"<<endl;
    else
        cout<<"The date is not magic."<<endl;
            
    
  
    //Process Input here
    
    

    return 0;
}

