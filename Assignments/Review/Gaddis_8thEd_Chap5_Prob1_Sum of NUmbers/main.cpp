/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 17, 2017, 10:57 AM
 * Purpose: Calculate the sum of numbers
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int number=0;
    int sum=0;
    
    //Input Information
    cout<<"Enter a number: ";
    cin>>number;
    while (number<0){
        cout<<"Enter a number greater than 0:";
        cin>>number;
    }
    
    //Calculation
    for(int i=1;i<=number;i++){
        sum+=i;
    }
    
    //Display Output
    cout<<"The sum is "<<sum<<endl;

    return 0;
}

