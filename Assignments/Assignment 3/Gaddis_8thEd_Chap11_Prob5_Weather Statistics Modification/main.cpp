/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 2, 2017, 10:23 AM
 * Purpose: Weather data of a year
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
//Structure
struct MonRain{
    float Jan;
    float Feb;
    float Mar;
    float Apr;
    float May;
    float Jun;
    float Jul;
    float Aug;
    float Sep;
    float Oct;
    float Nov;
    float Dec;
};

//Global constants
const int SIZE_1=12;//12 months 
const int SIZE_2=2; //rain and temperature per month

//Function Prototypes
void markSrt(int *,int);

int main(int argc, char** argv) {
    //Declare Variables
    MonRain weathMon[SIZE_2];//Structure array of 12 elements
    float rainArry[SIZE_1];  //rain array
    int temArry[SIZE_1];   //Temperature array
    float rainTot=0.0;       //Total rain of a year
    float temTot=0.0;        //Total temperature of a year
    float avg=0.0;           //Average temperature of this year
    string monArry[12]={"January","February","March","April", 
                        "May","June","July","August",
                        "September","October","November","December"};//An array of months
    
    //Input Information
    //Temperature
    //January
    cout<<"Temperature of Jan:";
    cin>>weathMon[0].Jan;
    temArry[0]=weathMon[0].Jan;
    //February
    cout<<"Temperature of Feb:";
    cin>>weathMon[0].Feb;
    temArry[1]=weathMon[0].Feb;
    //March
    cout<<"Temperature of Mar:";
    cin>>weathMon[0].Mar;
    temArry[2]=weathMon[0].Mar;
    //April    
    cout<<"Temperature of Apr:";
    cin>>weathMon[0].Apr;
    temArry[3]=weathMon[0].Apr;
    //May
    cout<<"Temperature of May:";
    cin>>weathMon[0].May;
    temArry[4]=weathMon[0].May;
    //June
    cout<<"Temperature of Jun:";
    cin>>weathMon[0].Jun;
    temArry[5]=weathMon[0].Jun;
    //July
    cout<<"Temperature of Jul:";
    cin>>weathMon[0].Jul;
    temArry[6]=weathMon[0].Jul;
    //August
    cout<<"Temperature of Aug:";
    cin>>weathMon[0].Aug;
    temArry[7]=weathMon[0].Aug;
    //September
    cout<<"Temperature of Sep:";
    cin>>weathMon[0].Sep;
    temArry[8]=weathMon[0].Sep;
    //October
    cout<<"Temperature of Oct:";
    cin>>weathMon[0].Oct;
    temArry[9]=weathMon[0].Oct;
    //November
    cout<<"Temperature of Nov:";
    cin>>weathMon[0].Nov;
    temArry[10]=weathMon[0].Nov;
    //December
    cout<<"Temperature of Dec:";
    cin>>weathMon[0].Dec;
    temArry[11]=weathMon[0].Dec;
    cout<<endl;
    
    //Rain
    //January
    cout<<"Rain of Jan:";
    cin>>weathMon[1].Jan;
    rainArry[0]=weathMon[1].Jan;
    //February
    cout<<"Rain of Feb:";
    cin>>weathMon[1].Feb;
    rainArry[1]=weathMon[1].Feb;
    //March
    cout<<"Rain of Mar:";
    cin>>weathMon[1].Mar;
    rainArry[2]=weathMon[1].Mar;
    //April    
    cout<<"Rain of Apr:";
    cin>>weathMon[1].Apr;
    rainArry[3]=weathMon[1].Apr;
    //May
    cout<<"Rain of May:";
    cin>>weathMon[1].May;
    rainArry[4]=weathMon[1].May;
    //June
    cout<<"Rain of Jun:";
    cin>>weathMon[1].Jun;
    rainArry[5]=weathMon[1].Jun;
    //July
    cout<<"Rain of Jul:";
    cin>>weathMon[1].Jul;
    rainArry[6]=weathMon[1].Jul;
    //August
    cout<<"Rain of Aug:";
    cin>>weathMon[1].Aug;
    rainArry[7]=weathMon[1].Aug;
    //September
    cout<<"Rain of Sep:";
    cin>>weathMon[1].Sep;
    rainArry[8]=weathMon[1].Sep;
    //October
    cout<<"Rain of Oct:";
    cin>>weathMon[1].Oct;
    rainArry[9]=weathMon[1].Oct;
    //November
    cout<<"Rain of Nov:";
    cin>>weathMon[1].Nov;
    rainArry[10]=weathMon[1].Nov;
    //December
    cout<<"Rain of Dec:";
    cin>>weathMon[1].Dec;
    rainArry[11]=weathMon[1].Dec;
    cout<<endl;
    
    //Calculation
    for(int i=0;i<SIZE_1;i++){ //Get the sum of rain
        rainTot+=rainArry[i];
    }
    
    for(int i=0;i<SIZE_1;i++){ //Get the temperature of rain
        temTot+=temArry[i];
    }
    avg=temTot/12.0;          //Get the average
    
    //Display Output
    for(int i=0;i<SIZE_1;i++){
        cout<<monArry[i]<<endl;
        cout<<"Rainfall: "<<rainArry[i]<<endl;
        cout<<"Temperature: "<<temArry[i]<<endl;
        cout<<"----------------------"<<endl;
    }
    
    //Sort the temperature array
    markSrt(temArry,SIZE_1);
    
    //Display Output
    cout<<endl;
    cout<<"Total Rainfall: "<<rainTot<<endl;
    cout<<"High Temperature: "<<temArry[11]<<endl;
    cout<<"Low Temperature: "<<temArry[0]<<endl;
    cout<<"Average Temperature: "<<avg<<endl;
   
    return 0;
}

void markSrt(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
    
}