/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 17, 2017, 5:40 PM
 * Purpose: store a value
 */

#include <iostream>

using namespace std;
//Class
class NumDays{
    private:
        float hours;
        float days;
    public:
        NumDays(int);
        void print(int hours){
            static_cast<float>(hours);
            days=hours/8.0;
            cout<<days<<" days."<<endl;
            hours=0;
        }
        
        int operator++(int hours){
            ++hours;
            return hours;
        }
        
        int operator--(int hours){
            --hours;
            return hours;
        }
};

NumDays::NumDays(int a){
    int hours=a;
}

int main(int argc, char** argv) {
    //Declare variables
    int hours;
    int hours2;
    int sum;
    NumDays day(hours2);
    cout<<"enter hours: ";
    cin>>hours;
    
    hours2=day.operator ++(hours);
    day.print(hours2);
    hours2=day.operator --(hours);
    day.print(hours2);

    return 0;
}

