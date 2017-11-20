/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 17, 2017, 10:57 AM
 * Purpose: Predict the size of a population of organisms
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float start=0;
    float rate=0;
    int days=0;
    float Population=0;
    
    //Input Information
    cout<<"Starting Size: ";
    cin>>start;
    while(start<2){
        cout<<"Starting size should be greater that 2."<<endl;
        cin>>start;
    }
    
    cout<<"Increasing rate: ";
    cin>>rate;
    while(rate<0){
        cout<<"Rate should be greater than 0."<<endl;
        cin>>rate;
    }
    
    cout<<"Days: ";
    cin>>days;
    while(days<1){
        cout<<"Days should be greater that 1."<<endl;
        cin>>days;
    }
    
    //Display Output
    for(int i=0;i<days;i++){
        Population=start*(1+rate);
        cout<<"Day "<<i+1<<": "<<Population<<endl;
        start=Population;
    }
    

    return 0;
}

