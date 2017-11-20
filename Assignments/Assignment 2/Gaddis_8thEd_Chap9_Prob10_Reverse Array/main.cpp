/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 27, 2017, 6:42 PM
 * Purpose:
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//Function Prototypes
int *revArry(int*,int);

int main(int argc, char** argv) {
    //Declare Variables
    int size;
    
    //Input Information
    cout<<"How many numbers?"<<endl;
    cin>>size;
    
    int numArry[size];
    int *number=numArry;
    
    //Input Information
    //Fill the array
    for(int i=0;i<size;i++){
        cout<<"Number "<<i+1<<": ";
        cin>>numArry[i];
    }
    
    //Display the original array
    cout<<"Original Array:"<<endl;
    for(int i=0;i<size;i++){
        cout<<numArry[i]<<" ";
    }
    cout<<endl;
    
    //Copy but inverse here
    number=revArry(numArry,size);
    
    //Display the inverse array
    cout<<"Inverse:"<<endl;
    for(int i=0;i<size;i++){
        cout<<number[i]<<" ";
    }
    
    return 0;
}

int *revArry(int *a,int n){
    int *b=new int[n];
    int size=n-1;
    for(int i=0;i<n;i++){
        b[i]=a[size];
        size--;
    }
    return b;
}