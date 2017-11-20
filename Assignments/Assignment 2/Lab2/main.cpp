/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 18, 2017, 12:49 PM
 * Purpose: Lab 2
 */

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;
//Function Prototypes
void markSrt(int *,int);
int *Mode(int,int[]);

int main(int argc, char** argv) {
    //Declare Variables
    int size;
    int sum=0;
    float mean=0;
    float median=0.0;
    
    //Input Information
    cout<<"how many numbers do you want?"<<endl;
    cin>>size;
    cout<<endl;
    
    //Set a random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Fill the array with random numbers
    int numArry[size];
    for(int i=0;i<size;i++){
        numArry[i]=rand()%90+10;//From 10 to 99
    }
    
    //Print out the array before sort
    cout<<"Before sort:"<<endl;
    for(int i=0;i<size;i++){
        cout<<numArry[i]<<" ";
    }
    
    //Calculations
    //Find the mean
    for(int i=0;i<size;i++){
        sum+=numArry[i];
    }
    mean=sum/size;
    
    //Sort the array here
    markSrt(numArry,size);
    
    //Print out the array after sort
    cout<<endl;
    cout<<"After sort:"<<endl;
    for(int i=0;i<size;i++){
        cout<<numArry[i]<<" ";
    }
    cout<<endl<<endl;
    
    //Fine the median
    if(size%2==0)
        median=(*(numArry+size/2)+*(numArry+(size/2)-1))/2.0;
    else
        median=*(numArry+(size+1)/2-1);
    
    //Find the mode
    int *mode=Mode(size,numArry);
    
    //Display Output
    cout<<"The mean value of the numbers is "<<mean<<endl;
    cout<<"The median value of the numbers is "<<median<<endl;
    cout<<"Mode: ";
    
    
    if(*mode==0){
        cout << "0 0";
    } 
    else{
        for(int i=0;i<(*mode+2);i++){
            cout<<*(mode+i)<<" ";
	}
    }
    
    
    return 0;
}

void markSrt(int *a,int s){
    for(int i=0;i<s-1;i++){
        for(int j=i+1;j<s;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }    
    }
}

int *Mode(int s,int a[]){
    int times=1;
    int counter=0;
    int max=0;
    int Value=a[0];
    int k = 2; // k is for matched number
    int* modeArry = new int[k];
    bool flag=true;
    
    for(int i=0;i<s;i++){
        if(Value==a[i+1]){
            times++;
        }
        else{
            Value=a[i+1];
            times=1;
        }
        if(times>max){
            max=times;
        }
    }
   
    do{
        flag=true;
        for(int i=1;i<max;i++){
            if(a[counter]==a[counter+1])
            {
            	counter++;
                
            }
            else{
                flag=false;
                counter++;
                break;
            }
        }
        
        if(flag&&max>1)
        {
            modeArry[k]=a[counter-1];
            k++;
        }
    }while(a[counter]!=a[s-1]&&max>1);
    
    modeArry[0]=k-2;
    modeArry[1]=max;
    
    if(max==1)
    {
        modeArry[1]=0;
    }
    
    return modeArry;
}