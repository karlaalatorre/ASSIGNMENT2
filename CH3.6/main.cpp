/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 *
 * Created on July 4, 2015, 12:19 AM
 */

#include <iostream>// using I/O

using namespace std;
//User libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float nmb1;//number 1 chosen by user
    float nmb2;//number 2 chosen by user
    
    //Output results
    cout<<"Enter two different numbers: "<<endl;
    cin>>nmb1;
    cin>>nmb2;
    
    if(nmb1>nmb2)
        cout<<"The larger number is "<<nmb1<<endl;
    else
        cout<<"The larger number is "<<nmb2<<endl;
    
    

    return 0;
}

