/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 17, 2017, 10:57 AM
 * Purpose: Gathering weather information
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//Function Prototypes
void selectionSort(string [],int);
bool binarySrch(string [],int,string);

int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE= 20;
    string names[SIZE] = {"Collins, Bill","Smith, Bart","Allen, Jim",
                          "Griffin, Jim", "Stamey, Marty","Rose, Geri", 
                          "Taylor, Terri", "Johnson, Jill","Allison, Jeff", 
                          "Looney, Joe", "Wolfe, Bill", "James, Jean", 
                          "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", 
                          "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                          "Pike, Gordon", "Holland, Beth" }; 
    string name;
    
    //Input information
    cout<<"Please enter a name: ";
    getline(cin,name);
    
    //Sort the names in the array here
    selectionSort(names,SIZE);
    
    //Display output
    //Using binary search to find names in the list
    if(binarySrch(names,SIZE,name))
        cout<<name<<" is in the list."<<endl;
    else
        cout<<name<<" is not in the list."<<endl;

    return 0;
}

void selectionSort(string a[],int size){
    int startScan,minIndex;
    string minValue;
    
    for(startScan=0;startScan<(size-1);startScan++){
        minIndex=startScan;
        minValue=a[startScan];
        for(int k=startScan+1;k<size;k++)
        {
            if(a[k].compare(minValue)<0)
            {
                minValue=a[k];
                minIndex=k;
            }
        }
        a[minIndex]=a[startScan];
        a[startScan]=minValue;
    }
  
}

bool binarySrch(string a[],int size,string n){
    //Declare Variables
    int begS=0;
    int endS=size-1;
    //Loop until found
    do{
        int midS=(begS+endS)/2;
        if(a[midS]==n) return true;
        else if (a[midS].compare(n)<0)
            begS=midS+1;
        else
            endS=midS-1;
    }while(endS>begS);
    return false;   
}