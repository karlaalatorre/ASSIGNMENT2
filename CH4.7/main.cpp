/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: show the points earned by purchasing books
 * Created on July 5, 2015, 8:55 PM
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
    int books;//number of books purchased in a month
    int points;//points earned
  
    //Process Input here
    cout<<" KNOW YOUR POINTS FOR THIS MONTH."<<endl;
    cout<<"Enter the number of books purchased this month: "<<endl;
    cin>>books;
    
    //Input values here
    if(books==0)
    {
        points=0;
            cout<<"You have earned "<<points<<" points this month."<<endl;
    }
    if(books==1)
    {
        points=5;
                cout<<"You have earned "<<points<<" points this month."<<endl;
    }
    if(books==2)
    {
        points=15;
                cout<<"You have earned "<<points<<" points this month."<<endl;
    }
    if (books==3)
    {
        points=30;
                cout<<"You have earned "<<points<<" points this month."<<endl;
    }
    if (books>=4)
    {
        points=60;
                cout<<"You have earned "<<points<<" points this month."<<endl;
    }
    else
    {
        if(books<0)
            cout<<"Number of books cannot be negative!"<<endl;
    }
   
    //Outputs unknown here
    return 0;
}

