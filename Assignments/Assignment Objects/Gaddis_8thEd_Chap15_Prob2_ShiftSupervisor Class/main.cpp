/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 17, 2017, 7:35 PM
 * Purpose: Employee information using inheritance
 */

#include <iostream>
#include <string>

using namespace std;
//Class
class Employee{
    private:
        string name;
        string number;
        string hDate;
    public:
        Employee(){ //constructor
            cout<<"Get basic information here."<<endl;
        }
        void getInfo(){
            cout<<"Name: ";
            cin>>name;
            cout<<"number: ";
            cin>>number;
            cout<<"Hire Date: ";
            cin>>hDate;
            
            showInfo(name,number,hDate);
        }
        
        void showInfo(string a,string b,string c){
            cout<<"Name: "<<a<<endl;
            cout<<"Number: "<<b<<endl;
            cout<<"Date: "<<c<<endl;
        }
        
};
        
class ShiftSupervisor:public Employee{ //Inheritance
    private:
        int shift;
        double rate;
        int bonus;
        int anSala;
    public:
        ShiftSupervisor(){
            cout<<"And get more information later."<<endl;
        }
        void showMore(){
            cout<<"Input shirt: ";
            cin>>shift;
            cout<<"Input rate: ";
            cin>>rate;
            cout<<"     Bonus    Annual Salary"<<endl;
            cout<<"IN: ";
            cin>>bonus>>anSala;
            cout<<"Shift: "<<shift<<endl;
            cout<<"Rate: "<<rate<<endl;
            cout<<"Bonus: "<<bonus<<endl;
            cout<<"anSala"<<endl;
        }
};        
        
int main(int argc, char** argv) {
    //Declare variables
    ShiftSupervisor pw;
    string nam;
    string num;
    string date;
    
    //Display output
    pw.getInfo();
    pw.showMore();

    return 0;
}