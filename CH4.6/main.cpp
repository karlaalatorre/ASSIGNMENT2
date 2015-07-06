/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: color mixer: to mix primary colors and give secondary colors
 * Created on July 5, 2015, 8:35 PM
 */

#include <iostream>// Iostream I/O
#include <iomanip>// Iomanip

using namespace std;

//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables here
    float penies;//pennies typed by user
    float nickls;//nickels typed by user
    float dimes;//dimes typed by user
    float qrtrs;//quarters typed by user
    float total;//total amount should equal $1.00
    
    //Input values here
    cout<<"           THE DOLLAR GAME"<<endl;
    cout<<       "Enter exactly one dollar to win!"<<endl;
    cout<<"  "
            "  "
            "  "
            "  "<<endl;
    cout<<"Enter the number of pennies: "<<endl;
    cin>>penies;
    cout<<"Enter the number of nickels: "<<endl;
    cin>>nickls;
    cout<<"Enter the number of dimes: "<<endl;
    cin>>dimes;
    cout<<"Enter the number of quarters: "<<endl;
    cin>>qrtrs;
    
    total=(penies*.01)+(nickls*.05)+(dimes*.10)+(qrtrs*.25);
  
    //Process Input here
    if(total==1.00)
        cout<<"CONGRATULATIONS, you entered exactly one dollar!"<<endl;
    else
    {
        if(total<1.00&&total>0)
        {cout<<"You entered less than a dollar. Try again later!"<<endl;}
        else
        {if (total>1.00)
        {cout<<"You entered more than a dollar. Try again later!"<<endl;}
        else
        {cout<<"The number of coins have to be greater than 0!"<<endl;}
        }
    }
    return 0;
    }
    