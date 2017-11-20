/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 27, 2017, 6:20 PM
 * Purpose: fill the array
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//Function Prototypes
int *fillArry(int);

int main(int argc, char** argv) {
    //Declare Variables
    int size;
    
    //Input information
    cout<<"How many numbers?"<<endl;
    cin>>size;
    
    int numArry[size];
    int *num=numArry;
    //Fill the array here
    num=fillArry(size);
    
    //Display Output
    cout<<"The array is"<<endl;
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}
int *fillArry(int n){
    int *b=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Number "<<i+1<<": ";
        cin>>*(b+i);
    }
    return b;
}