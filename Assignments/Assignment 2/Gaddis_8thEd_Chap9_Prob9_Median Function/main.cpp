/* 
 * File:   main.cpp
 * Author: Boch
 * Created on September 27, 2017, 5:54 PM
 * Purpose: Find the median
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//Function Prototypes
void markSrt(int *,int);
float Median(int *,int);

int main(int argc, char** argv) {
    //Declare Variables
    int size;
    float median;
    
    //Input Information
    cout<<"How many numbers?"<<endl;//Determine how many numbers of array
    cin>>size;
    int numArry[size];
    
    for(int i=0;i<size;i++){
        cout<<"number"<<i+1<<": ";
        cin>>*(numArry+i);
    }
    
    //Sort the array
    markSrt(numArry,size);
    
    //Display the array
    for(int i=0;i<size;i++){
        cout<<numArry[i]<<" ";
    }
    cout<<endl;
    
    //Fine the median
    median=Median(numArry,size);   
    
    //Display Output
    cout<<"There are "<<size<<" numbers in the array."<<endl;
    cout<<"The median of these numbers is "<<median<<endl;
    
    return 0;
}

void markSrt(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(a+i)>*(a+j)){
                *(a+i)=*(a+i)^*(a+j);
                *(a+j)=*(a+i)^*(a+j);
                *(a+i)=*(a+i)^*(a+j);
            }
        }
    }
}

float Median(int *a,int s){
    float m;
    if(s%2==0)
        m=(*(a+s/2)+*(a+(s/2)-1))/2.0;
    else
        m=*(a+(s+1)/2-1);

    return m;
}