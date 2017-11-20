/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 17, 2017, 10:57 AM
 * Purpose: Compare the areas of two rectangles
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float width=0;
    float width2=0;
    float length=0;
    float length2=0;
    float area=0;
    float area2=0;
    
    //Input Information
    cout<<"width 1: ";
    cin>>width;
    cout<<"length 1: ";
    cin>>length;
    cout<<"width 2: ";
    cin>>width2;
    cout<<"length 2: ";
    cin>>length2;
    
    //Calculation
    area=width*length;
    area2=width2*length2;

    //Display Output
    if(area>area2)
        cout<<"The first rectangle has greater area."<<endl;
    else if(area<area2)
        cout<<"The second rectangle has greater area."<<endl;
    else 
        cout<<"Two rectangle areas are the same."<<endl;
                
    return 0;
}

