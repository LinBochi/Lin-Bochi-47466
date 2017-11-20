/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 3, 2017, 4:07 PM
 * Purpose: Track the speaker's bureau
 */

#include <string>
#include <iostream>

using namespace std;
//Structure
struct Speakers{
    string name;
    long phone;
    string topic;
    int Fee;
};

//Global Constants
int SIZE=10;

int main(int argc, char** argv) {
    //Declare Variables
    Speakers Info[SIZE];
    
    //Input Information
    for(int i=0;i<SIZE;i++){
        cout<<"Please enter speaker's name: ";
        getline(cin,Info[i].name);
        cout<<"Please enter speaker's phone number: ";
        cin>>Info[i].phone;
        cin.ignore();
        cout<<"Please enter speaker's topic: ";
        getline(cin,Info[i].topic);
        cout<<"Please enter speaker's fee: ";
        cin>>Info[i].Fee;
        cin.ignore();
        cout<<endl;
    }
    
    //Display Output
    for(int i=0;i<SIZE;i++){
        cout<<"Name: "<<Info[i].name<<endl;
        cout<<"Phone: "<<Info[i].phone<<endl;
        cout<<"Topic: "<<Info[i].topic<<endl;
        cout<<"Fee: "<<Info[i].Fee<<endl;
        cout<<"---------------------------------"<<endl;
    }
    
    return 0;
}

