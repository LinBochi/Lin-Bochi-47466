/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 3, 2017, 4:07 PM
 * Purpose: Customer information
 */

#include <string>
#include <iostream>

using namespace std;
//Structure
struct Customer{
    string name;
    string address;
    string city;
    string state;
    int zip;
    long phone;
    long balance;
    string date;
};

//Global Constants
int SIZE=10;

int main(int argc, char** argv) {
    //Declare Variables
    Customer Info[SIZE];
    
    //Input Information
    for(int i=0;i<SIZE;i++){
        cout<<"Please enter name: ";
        getline(cin,Info[i].name);
        cout<<"Please enter address: ";
        getline(cin,Info[i].address);
        cout<<"Please enter city: ";
        getline(cin,Info[i].city);
        cout<<"Please enter state: ";
        getline(cin,Info[i].state);
        cout<<"Please enter Zip code: ";
        cin>>Info[i].zip;
        cout<<"Please enter phone number: ";
        cin>>Info[i].phone;
        cin.ignore();
        cout<<"Please enter account balance: ";
        cin>>Info[i].balance;
        cin.ignore();
        cout<<"Please enter date of last payment: ";
        getline(cin,Info[i].date);
        cout<<endl;
    }
    
    //Display Output
    for(int i=0;i<SIZE;i++){
        cout<<Info[i].name<<endl;
        cout<<Info[i].address<<endl;
        cout<<Info[i].city<<" "<<Info[i].state<<" "<<Info[i].zip<<endl;
        cout<<Info[i].phone<<endl;
        cout<<"$ "<<Info[i].balance<<endl;
        cout<<Info[i].date<<endl;
        cout<<"---------------------------------"<<endl;
    }
    
    return 0;
}

