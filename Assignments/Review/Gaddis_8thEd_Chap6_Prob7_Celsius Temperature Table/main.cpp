/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 17, 2017, 10:57 AM
 * Purpose: Converting a temperature from Fahrenheit to Celsius
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//Global Constants
const int SIZE=20;

//Function Prototypes
float celsius(float[],int);

int main(int argc, char** argv) {
    //Declare Variables
    float Cel[SIZE];
    
    //Calculation
    celsius(Cel,SIZE);
    
    //Display Output
    for(int i=0;i<SIZE;i++){
        cout<<Cel[i]<<endl;
    }

    return 0;
}

float celsius(float a[],int s){
    float c=0.0;
    for(int i=0;i<s+1;i++){
        c=(i-32.0)*5.0/9.0;
        a[i]=c;
    }
}