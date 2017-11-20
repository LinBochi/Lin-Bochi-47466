/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 17, 2017, 7:35 PM
 * Purpose: Team leader information using inheritance
 */

#include <iostream>
#include <string>

using namespace std;
//Class
class Teamleader{
    private:
        int minHr;
        string name;
        int need;
        int hours;
        int bonus;
        int hourAtt;
    public:
        Teamleader(){ //constructor
            cout<<"Get basic information here."<<endl;
        }
        void getInfo(){
            cout<<"Name: ";
            cin>>name;
            cout<<"Min hr: ";
            cin>>minHr;
            cout<<"bonus: ";
            cin>>bonus;
            cout<<"hours: ";
            cin>>hours;
            cout<<"hours attend: ";
            cin>>hourAtt;
            
            showInfo(name,minHr,need,hours,bonus);
        }
        
        void showInfo(string a,int b,int c,int d,int e){
            cout<<"Name: "<<a<<endl;
            cout<<"Minimum hours: "<<b<<endl;
            cout<<"Hours Required: "<<c<<endl;
            cout<<"Hours Attended: "<<d<<endl;
            cout<<"Monthly bonus: "<<e<<endl;
        }
        
};
        
class ProductionWorker:public Teamleader{ //Inheritance
    private:
        int shift;
        double rate;
    public:
        ProductionWorker(){
            cout<<"And get more information later."<<endl;
        }
        void showMore(){
            cout<<"Input shirt: ";
            cin>>shift;
            cout<<"Input rate: ";
            cin>>rate;
            cout<<"Shift: "<<shift<<endl;
            cout<<"Rate: "<<rate<<endl;
        }
};        
        
int main(int argc, char** argv) {
    //Declare variables
    ProductionWorker pw;
    string nam;
    string num;
    string date;
    
    //Display output
    pw.getInfo();
    pw.showMore();

    return 0;
}
