/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 17, 2017, 10:57 AM
 * Purpose: Show the days of a month
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int Month=0;
    int Year=0;
    int days=0;
    int dayPY;
    
    //Input Information
    cout<<"Enter a month(1-12): ";
    cin>>Month;
    cout<<"Enter a year: ";
    cin>>Year;
    
    //Calculation
    if(Year%100==0){
        if(Year%400==0)
            dayPY=366;
    }
    
    else{
        if(Year%4==0)
            dayPY=366;
    }
    
    if(Month==2){
        if(dayPY==366)
            days=29;
        else
            days=28;
    }
    else if(Month==1||Month==3||Month==5||Month==7||Month==8||Month==10||Month==12)
        days=31;
    else
        days=30;
    
    //Display Output
    cout<<days<<" days"<<endl;
        
    

    return 0;
}

