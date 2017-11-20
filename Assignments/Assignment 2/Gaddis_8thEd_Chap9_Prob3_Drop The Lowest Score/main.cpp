/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 25, 2017, 5:48 PM
 * Purpose: Sort the scores, drop the lowest score and calculate average
 */

#include <iostream>

using namespace std;
//Function Prototypes
void markSrt(int *,int);
float averageSco(int *,int);
int dropSco(int *,int);

int main(int argc, char** argv) {
    //Declare Variables
    int size=0;
    float avr=0.0;
    int number; //The number of lowest scores
    
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
    
    //Sort the score array
    markSrt(score,size);
    
    //Display Output
    cout<<"\nAfter sort: "<<endl;
    for(int i=0;i<size;i++){
        cout<<*(score+i)<<" ";
    }
    cout<<endl;
    
    //Drop the lowest score
    number=dropSco(score,size);
    
    //Calculation
    avr=averageSco(score,size-number);
    
    //Display Output
    cout<<"The average of scores are "<<avr<<endl;
   
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

int dropSco(int *a,int n){
    int *b=new int[n];
    int size2=1;
    int low;
    int newArry;//New Array without the lowest score
    low=a[0];
    for(int i=1;i<n;i++){
        if(low==a[i]){
            a[i]=0;
            size2++;
        }
    }
    a[0]=0;
    
    //Sort the array again
    //High to low
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(a+i)<*(a+j)){
                *(a+i)=*(a+i)^*(a+j);
                *(a+j)=*(a+i)^*(a+j);
                *(a+i)=*(a+i)^*(a+j);
            }
        }
    }
    
    //Write data into a new array
    for(int i=0;i<n;i++){
        *(b+i)=a[i];
    }
    
    return size2;
}