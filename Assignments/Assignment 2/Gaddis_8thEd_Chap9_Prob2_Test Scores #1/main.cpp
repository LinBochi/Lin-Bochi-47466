/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 25, 2017, 5:48 PM
 * Purpose: Sort the scores and calculate average
 */

#include <iostream>

using namespace std;
//Function Prototypes
void markSrt(int *a,int n);
float averageSco(int *a,int n);

int main(int argc, char** argv) {
    //Declare Variables
    int size=0;
    float avr=0.0;
    
    //Input Information
    cout<<"How many scores: ";
    cin>>size;
    
    //Declare array
    int scoArry[size];
    int *score=scoArry;
    
    //Input Information
    for(int i=0;i<size;i++){
        cout<<"Score "<<i+1<<": ";
        cin>>*(score+i);
        //Input Validation
        while(*(score+i)<0){
            cout<<"Error. Enter a number >0: ";
            cin>>*(score+i);
        }
    }
    
    //Calculation
    avr=averageSco(score,size);
    
    //Sort the score array
    markSrt(score,size);
    
    //Display Output
    cout<<"\nAfter sort: "<<endl;
    for(int i=0;i<size;i++){
        cout<<*(score+i)<<" ";
    }
    cout<<endl;
    cout<<"The average of the scores are "<<avr<<endl;

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

float averageSco(int *a,int n){
    int sum=0;
    float avg=0.0;
    for(int i=0;i<n;i++){
        sum+=*(a+i);
    }
    avg=sum/n;
    
    return avg;
}