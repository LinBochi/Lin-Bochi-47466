/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 20, 2017, 6:07 PM
 * Purpose: Using class to holds data about an item in a retail store
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
//Class
class ReItem{
    private:
        string descp;       //Description
        int units;          //Units currently
        float price;       //retail price
        
    public:
        //ReItem();           //Constructor
        void setDescp(string);
        void setUnits(int);
        void setPrice(double);
        string getDescp();  //Get description
        int getUnits();     //Get units
        float getPrice();  //Get price
};

//Function Prototypes
void ReItem::setDescp(string a){
    descp=a;
}

void ReItem::setUnits(int a){
    units=a;
}

void ReItem::setPrice(double a){
    price=a;
}

string ReItem::getDescp(){
    return descp;
}

float ReItem::getPrice(){
    return price;
}

int ReItem::getUnits(){
    return units;
}

int main(int argc, char** argv) {
    //Declare Variables
    ReItem retail1;
    ReItem retail2;
    ReItem retail3;
    
    //Store data
    retail1.setDescp("Jacket");
    retail1.setUnits(12);
    retail1.setPrice(59.95);
    retail2.setDescp("Designer Jeans");
    retail2.setUnits(40);
    retail2.setPrice(34.95);
    retail3.setDescp("Shirt");
    retail3.setUnits(20);
    retail3.setPrice(24.95);
    
    //Display Output
    cout<<"Item #1"<<" "<<retail1.getDescp()<<" ";
    cout<<retail1.getUnits()<<" ";
    cout<<retail1.getPrice()<<endl;
    cout<<"Item #2"<<" "<<retail2.getDescp()<<" ";
    cout<<retail2.getUnits()<<" ";
    cout<<retail2.getPrice()<<endl;
    cout<<"Item #3"<<" "<<retail3.getDescp()<<" ";
    cout<<retail3.getUnits()<<" ";
    cout<<retail3.getPrice()<<endl;
    
    return 0;
}

