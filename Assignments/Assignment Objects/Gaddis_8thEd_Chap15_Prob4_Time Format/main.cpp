/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 17, 2017, 8:34 PM
 * Purpose: Convert the time
 */

#include <iostream>
#include <string>

using namespace std;
//Class
class Time{
    private:
        int time;
    public:
        Time();
};

class MilTime:public Time{
    private:
        int milHours;
        int milSeconds;
    public:
        MilTime();
        void setTime(int time){
            cout<<"Enter time here (ex.4:30->430)"<<endl;
            cin>>milHours;
            time=milHours;
        }
        
        int getHour(int time){
            time=milHours;
            int choice; 
            cout<<"1 for am; 2 for pm"<<endl;
            cout<<"#: ";
            cin>>choice;
            
            int n;
            if(choice==1){
                n=time/100;
            }
            else
                n=(time/100)+12;
            
            return n*100+milHours%100;
        }
        int getStandHr(int a){
            a=getHour(milHours);
            cout<<a<<endl;
        }
};

int main(int argc, char** argv) {
    //Declare variables
    MilTime mt;
    int time;
    
    //Input information
    mt.setTime(time);
    
    //Calculation
    mt.getHour(time);
    
    //Display information
    mt.getStandHr(time);
    
    return 0;
}

