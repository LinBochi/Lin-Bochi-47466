/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 17, 2017, 10:57 AM
 * Purpose: Calculate the weight
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>


using namespace std;
//Global constants
const float Gravity=9.8;

int main(int argc, char** argv) {
    //Declare Variables
    float mass=0;
    float weight=0;
    
    //Input Information
    cout<<"Enter mass: ";
    cin>>mass;
    
    //Calculation
    weight=mass*Gravity;
    
    //Display Output
    cout<<weight<<endl;
    if(weight>1000)
        cout<<"It is too heavy."<<endl;
    if(weight<10)
        cout<<"It is too light."<<endl;

    return 0;
}

