/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: Average Rainfall
 * Created on July 1, 2015, 8:57 PM
 */
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    string mth1;
    string mth2;
    string mth3;
 float rain1;
 float rain2;
 float rain3;
 float ttlrn;

 cout << "Type first month : ";
 cin >> mth1;
 cout << "Enter the rainfall: ";
 cin >> rain1;
 cout << "Type second month : ";
 cin >> mth2;
 cout << "Enter the rainfall: ";
 cin >> rain2;
 cout << "Type third month : ";
 cin >> mth3;
 cout << "Enter the rainfall : ";
 cin >> rain3;

 ttlrn = (rain1 + rain2 + rain3) / 3;

 cout << setprecision(2) << fixed;
 cout<<""
         "";
 cout << "The average rainfall for " << mth1 << ", "
  << mth2 << ", and " << mth3 << " is: " <<ttlrn<<endl;
    return 0;
}

