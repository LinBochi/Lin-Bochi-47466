/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 17, 2017, 4:46 PM
 * Purpose: Translate days into date
 */

#include <iostream>
#include <string>

using namespace std;
//Class
class DayOfYear{
    private:
        int number;
        int monDays[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
        string months[12] = {"January ", "February ","March ","April ","May ",
                             "June ","July ","August ","September ","October ",
                             "November ","December "}; 
    public:
        DayOfYear(int); //constructor
        void print(int num){
            int month=0;
            while (monDays[month]<num)
                month=(month + 1) %12;

		//Display month and day
		cout << months[month] <<" "<<num-monDays[month-1];
        }
};

DayOfYear::DayOfYear(int a){
    int num=a;
}

int main(int argc, char** argv) {
    int num;
    cout<<"enter days: ";
    cin>>num;
    
    //Display output
    DayOfYear day(num);
    day.print(num);
    
    return 0;
}
