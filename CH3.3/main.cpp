/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose: display the average score test 
 * Created on July 1, 2015, 8:39 PM
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
    float tst1;//score in test 1
    float tst2;//score in test 2
    float tst3;//score in test 3
    float tst4;//score in test 4
    float tst5;//score in test 5
    float total;//average of test scores
    
    //Input values here
  
    //Process Input here
    cout<<"Score of Test #1: ";
    cin>>tst1;
    cout<<"Score of Test #2: ";
    cin>>tst2;
    cout<<"Score of Test #3: ";
    cin>>tst3;
    cout<<"Score of Test #4: ";
    cin>>tst4;
    cout<<"Score of Test #5: ";
    cin>>tst5;
    
    total=(tst1+tst2+tst3+tst4+tst5)/5;
    
    //Outputs unknown here
    cout<< setprecision(1) << fixed;
    cout<<"Average of Test Score: "<<total<<endl;

    return 0;
}

