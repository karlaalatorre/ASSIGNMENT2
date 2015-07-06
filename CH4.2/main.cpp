/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 *
 * Created on July 5, 2015, 7:35 PM
 */

#include <iostream>// Iostream I/O

using namespace std;

//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables here
    float lng1;//length of rectangle 1
    float wit1;//width of rectangle 1
    float lng2;//length of rectangle 2
    float wit2;//width of rectangle 2
    float area1;//area of rectangle 1
    float area2;//area of rectangle 2
    
    //Input values here
    cout<<"Enter the length of rectangle 1: ";
    cin>>lng1;
    cout<<"Enter the width of rectangle 1: ";
    cin>>wit1;
    cout<<"Enter the length of rectangle 2: ";
    cin>>lng2;
    cout<<"Enter the width of rectangle 2: ";
    cin>>wit2;
    
    area1=lng1*wit1;//total of area 1
    area2=lng2*wit2;//total of area 2
  
    //Process Input here
    cout<<""
            " "
            " "
            " "<<endl;
    if(area1>area2)
        cout<<"The area of rectangle 1 is greater than rectangle 2."<<endl;
    else if(area1<area2)
        cout<<"The area of rectangle 2 is greater than rectangle 1."<<endl;
    else if(area1==area2)
        cout<<"The area of both rectangles are the same!"<<endl;
    
    //Outputs unknown here
    

    return 0;
}

