/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose:Running the race
 * Created on July 5, 2015, 9:25 PM
 */

#include <iostream>// Iostream I/O
#include <iomanip>// for fixed
#include <string>//for the names of the runners

using namespace std;

//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables here
    string run1;//name of runner 1
    string run2;//name of runner 2
    string run3;//name of runner 3
    float time1;//time of runner 1
    float time2;//time of runner 2
    float time3;//time of runner 3
    
    //Input values here
    //FIRST RUNNER
    cout<<"Enter name of first runner: ";
    cin>>run1;
    cout<<"Enter time for first runner: ";
    cin>>time1;
    if(time1<=0)
        cout<<"Only positive times are allowed!"<<endl;
    //SECOND RUNNER
    cin.ignore();
    cout<<"Enter name of second runner: ";
    cin>>run2;
    cout<<"Enter time for second runner: ";
    cin>>time2;
    if(time2<=0)
        cout<<"Only positive times are allowed!"<<endl;
    //THIRD RUNNER
    cin.ignore();
    cout<<"Enter name of third runner: ";
    cin>>run3;
    cout<<"Enter time for third runner";
    cin>>time2;
    if(time2<=0)
        cout<<"Only positive times are allowed!"<<endl;
    //RESULTS
    cout<<" "
            "  "
            "  "
            "  "<<endl;
    cout<<"     RESULTS"<<endl;
    if(time1<time2&&time1<time3)
    {
        if(time2<time3)
        {cout<<"First Place: "<<run1<<endl;
        cout<<"Second Place: "<<run2<<endl;
        cout<<"Third Place: "<<run3<<endl;}
        
        if(time3<time2)
        {
            cout<<"First Place: "<<run1<<endl;
        cout<<"Second Place: "<<run3<<endl;
        cout<<"Third Place: "<<run2<<endl;}
    }
    if(time2<time1&&time2<time3)
    {
        if(time1<time3)
        {
            cout<<"First Place: "<<run2<<endl;
        cout<<"Second Place: "<<run1<<endl;
        cout<<"Third Place: "<<run3<<endl;
        }
        if(time3<time1)
        {
            cout<<"First Place: "<<run2<<endl;
            cout<<"Second Place: "<<run3<<endl;
            cout<<"Third Place: "<<run1<<endl;
        }
    }
    if(time3<time1&&time3<time2)
    {
        if(time1<time2)
        {
            cout<<"First Place: "<<run3<<endl;
            cout<<"Second Place: "<<run1<<endl;
            cout<<"Third Place: "<<run2<<endl;
        }
        if(time2<time1)
        {
            cout<<"First Place: "<<run3<<endl;
            cout<<"Second Place: "<<run2<<endl;
            cout<<"Third Place: "<<run1<<endl;
        }
    }
    return 0;
}
        