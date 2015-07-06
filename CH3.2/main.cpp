/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: Amount of income generated on a stadium
 * Created on July 1, 2015, 7:59 PM
 */

//System Libraries
#include<iostream>// I/O
#include <iomanip>

using namespace std;
//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!

int main()
{
   //Declare variables here
 float nmbA;//number of tickets sold in class a
 float nmbB;//number of tickets sold in class b
 float nmbC;//number of tickets sold in class c
 float total;//total of tickets sold in $
 
    //Input values here
 float clssA = 15;//value per seat in class a
 float clssB = 12;//value per seat in class b
 float clssC = 9;//value per seat in class c
 
    //Process Input here
 cout << "Tickets sold for Class A :  ";
 cin >> nmbA;
 cout << "Tickets sold for Class B :  ";
 cin >> nmbB;
 cout << "Tickets sold for Class C :  ";
 cin >> nmbC;

    //output unknowns here
 cout << setprecision(2) << fixed;
 cout << "Sales of Class A: $" << nmbA * clssA << endl;
 cout << "Sales of Class B: $" << nmbB * clssB << endl;
 cout << "Sales of Class C: $" << nmbC * clssC << endl;

 total = (nmbA*clssA) + (nmbB*clssB) + (nmbC*clssC);

 cout << "Total sales generated: $" << total <<endl;
 
 //Exit stage right!


 return 0;
}