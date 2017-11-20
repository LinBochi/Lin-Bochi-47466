/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 17, 2017, 10:57 AM
 * Purpose: Converts Celsius to Fahrenheit
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float Cel=0;
    float Fah=0;
    
    //Input Information
    cout<<"Please enter the degree of Celsius: ";
    cin>>Cel;
    
    //Calculation
    Fah=Cel*1.8+32;
    
    //Display Output
    cout<<"Celsius "<<Cel<<" is equal to Fahrenheit "<<Fah<<endl;
    

    return 0;
}

