/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 17, 2017, 10:57 AM
 * Purpose: Gathering weather information
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
//Global Constants
const int ROW=3;
const int COL=30;

int main(int argc, char** argv) {
    //Declare Variables
    ifstream inputFile;
    char WeaArry[ROW][COL];
    int s=0;
    int c=0;
    int r=0;
    
    //Open the file
    inputFile.open("RainOfShine.h");
    
    //Reading File
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            inputFile>>WeaArry[i][j];
        }
    }
    
    //Close the file
    inputFile.close();
    
    //Display Weather Array
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            if(WeaArry[i][j]=='R')
                r++;
            else if(WeaArry[i][j]=='C')
                c++;
            else s++;
            cout<<WeaArry[i][j];
        }
    }
    
    cout<<r<<" days are rainy days."<<endl;
    cout<<s<<" days are shine days."<<endl;
    cout<<c<<" days are cloudy days."<<endl;

    return 0;
}

