/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 25, 2017, 6:34 PM
 * Purpose: Donation, high to low
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//Function Prototypes
int *fillArry(int);
void arrSelectSort(int *[],int);
void showArray(const int[],int);
void showArrPtr(int *[],int);

//Global Constant 
const int NUM_DONATIONS=15;

int main(int argc, char** argv) {
    //Declare Variables
    int *donations;
    int *arrPtr[NUM_DONATIONS]={nullptr,nullptr,nullptr,nullptr,nullptr,
                                nullptr,nullptr,nullptr,nullptr,nullptr,
                                nullptr,nullptr,nullptr,nullptr,nullptr};
    
    //Input Information
    donations=fillArry(NUM_DONATIONS);
    
    for(int i=0;i<NUM_DONATIONS;i++){
        arrPtr[i]=&donations[i];
    }
    
    //Sort the elements of the array of pointers
    arrSelectSort(arrPtr, NUM_DONATIONS);
    
    //Display Information
    cout << "The donations, sorted in ascending order are: \n";
    showArrPtr(arrPtr, NUM_DONATIONS);
    
    cout << "The donations, in their original order are: \n";
    showArray(donations, NUM_DONATIONS);

    return 0;
}

int *fillArry(int n){
    int *b=new int[n];
    cout<<"Please enter the donations:"<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<": ";
        cin>>*(b+i);
    }
    return b;
}

void arrSelectSort(int *arr[],int size){
    int startScan, minIndex;
    int *minElem;
    
    for(startScan=0;startScan<(size-1);startScan++){
        minIndex=startScan;
        minElem=arr[startScan];
        for(int index=startScan+1;index<size;index++){
            if(*(arr[index])>*minElem){
                minElem=arr[index];
                minIndex=index;
            }
        }
        arr[minIndex]=arr[startScan];
        arr[startScan]=minElem;
    }
}

void showArray(const int arr[],int size){
    for(int count=0;count<size;count++)
        cout<<arr[count]<<" ";
    cout<<endl;
}
    
void showArrPtr(int *arr[],int size){
    for(int count=0;count<size;count++)
        cout<<*(arr[count])<<" ";
    cout<<endl;
    
}