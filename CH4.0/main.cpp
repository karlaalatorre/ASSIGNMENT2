/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 *
 * Created on July 5, 2015, 6:55 PM
 */

//System Libraries
#include <iostream>// File I/O
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    int nmbr;//number user will type
    
    //Initialize values
    cout<<"Enter a number from 1 to 10: ";//display to begin
    cin>>nmbr;
    
    if(nmbr <1 || nmbr >10)
        cout<<"The number should be on the range 1-10!"<<endl;//out of range display
    else{
        switch(nmbr)
        {
            case 1: cout<<"The Roman number is: I"<<endl;
                break;
            case 2: cout<<"The Roman number is: II"<<endl;
                break;
            case 3: cout<<"The Roman number is: III"<<endl;
                break;
            case 4: cout<<"The Roman number is: IV"<<endl;
                break;
            case 5: cout<<"The Roman number is: V"<<endl;
                break;
            case 6: cout<<"The Roman number is: VI"<<endl;
                break;
            case 7: cout<<"The Roman number is: VII"<<endl;
                break;
            case 8: cout<<"The Roman number is: VIII"<<endl;
                break;
            case 9: cout<<"The Roman number is: IX"<<endl;
                break;
            case 10: cout<<"The Roman number is: X"<<endl;
                break;
        }//switch ends
        
     }//else ends
    //Exit stage right!
}//main end
    
 