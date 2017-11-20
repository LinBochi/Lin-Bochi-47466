/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 1, 2017, 5:45 PM
 * Purpose: Gather sales information
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
//Structure
struct Division{
    float east;
    float west;
    float north;
    float south;
};

//Global Constant
const int DIGIT_1=1;
const int DIGIT_2=3;

int main(int argc, char** argv) {
    //Declare Variables
    Division distric[DIGIT_1];
    float sum[DIGIT_2];
    float q1,q2,q3,q4;
    float avg;
    
    //Input Information
    for(int i=0;i<4;i++){
        cout<<"Quarter 1:";
        cin>>q1;
        cout<<"Quarter 2:";
        cin>>q2;
        cout<<"Quarter 3:";
        cin>>q3;
        cout<<"Quarter 4:";
        cin>>q4;
        cout<<endl;
        sum[i]=q1+q2+q3+q4;
    }
    
    //Calculation
    //Get the sum
    distric[0].east=sum[0];
    distric[0].west=sum[1];
    distric[0].north=sum[2];
    distric[0].south=sum[3];
    
    //Get the average
    for(int i=0;i<4;i++){
        avg=sum[i]/4.0;
        if(i==0)
            distric[1].east=avg;
        else if(i==1)
            distric[1].west=avg;
        else if(i==2)
            distric[1].north=avg;
        else
            distric[1].south=avg;
        avg=0.0;
    }
    
    //Display Output
    cout<<"East"<<endl;
    cout<<"Total: "<<distric[0].east<<endl;
    cout<<"Average: "<<distric[1].east<<endl<<endl;
    cout<<"West"<<endl;
    cout<<"Total: "<<distric[0].west<<endl;
    cout<<"Average: "<<distric[1].west<<endl<<endl;
    cout<<"North"<<endl;
    cout<<"Total: "<<distric[0].north<<endl;
    cout<<"Average: "<<distric[1].north<<endl<<endl;
    cout<<"South"<<endl;
    cout<<"Total: "<<distric[0].south<<endl;
    cout<<"Average: "<<distric[1].south<<endl<<endl;
    

    return 0;
}

