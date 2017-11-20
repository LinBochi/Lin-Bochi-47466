/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 19, 2017, 8:15 PM
 * Purpose: Demonstrate dates by using class
 */

#include <iostream>
#include <string>

using namespace std;
//Class
class Date{
    private: 
        int day;
        int month;
        int year;
        
    public:
        void form_1(int,int,int); //Display in form 1
        void form_2(int,int,int); //Display in form 2
        void form_3(int,int,int); //Display in form 3
    
};

//Function Prototypes
void Date::form_1(int a, int b, int c){
    cout<<b<<"/"<<a<<"/"<<c<<endl;//Form: month / day / year
}

void Date::form_2(int a, int b, int c){
    string monStr;
    if(b==1)
        monStr="January";
    else if(b==2)
        monStr="February";
    else if(b==3)
        monStr="March";
    else if(b==4)
        monStr="April";
    else if(b==5)
        monStr="May";
    else if(b==6)
        monStr="June";
    else if(b==7)
        monStr="July";
    else if(b==8)
        monStr="August";
    else if(b==9)
        monStr="September";
    else if(b==10)
        monStr="October";
    else if(b==11)
        monStr="November";
    else
        monStr="December";
    
    //Display Output
    cout<<monStr<<" "<<a<<", "<<c<<endl;//Form: month day, year
}

void Date::form_3(int a, int b, int c){
      string monStr;
    if(b==1)
        monStr="January";
    else if(b==2)
        monStr="February";
    else if(b==3)
        monStr="March";
    else if(b==4)
        monStr="April";
    else if(b==5)
        monStr="May";
    else if(b==6)
        monStr="June";
    else if(b==7)
        monStr="July";
    else if(b==8)
        monStr="August";
    else if(b==9)
        monStr="September";
    else if(b==10)
        monStr="October";
    else if(b==11)
        monStr="November";
    else
        monStr="December";
    
    //Display Information
    cout<<a<<" "<<monStr<<" "<<c<<endl;//Form: day month year
}

int main(int argc, char** argv) {
    //Declare Variables
    int day;
    int month;
    int year;
    Date date;
    
    //Input Information
    cout<<"Day: ";
    cin>>day;
    while(day<0||day>31){       //Validation of day
        cout<<"Please enter a valid day: ";
        cin>>day;
    }
    
    cout<<"Month: ";
    cin>>month;
    while(month<0||month>12){   //Validation of month
        cout<<"Please enter a valid month: ";
        cin>>month;
    }
    
    cout<<"Year: ";
    cin>>year;
    
    //Display Output
    date.form_1(day,month,year);
    date.form_2(day,month,year);
    date.form_3(day,month,year);

    return 0;
}

