/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 17, 2017, 10:57 AM
 * Purpose: Convert U.S. dollar amounts to Japanese yen and to euros
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//Global Constants
const float YEN_PER_DOLLAR=98.93;
const float EUROS_PER_DOLLAR=0.74;

int main(int argc, char** argv) {
    //Declare Variables
    float Mamount=0;
    float Yen;
    float Euros;
    
    //Input Information
    cout<<"Please enter the amount of dollars: $";
    cin>>Mamount;
    
    //Calculation
    Yen=Mamount*YEN_PER_DOLLAR;
    Euros=Mamount*EUROS_PER_DOLLAR;
    
    //Display Output
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<Mamount<<" US dollars are equal to "<<Yen<<" Japanese Yen."<<endl;
    cout<<Mamount<<" US dollars are equal to "<<Euros<<"Euros"<<endl;

    return 0;
}

