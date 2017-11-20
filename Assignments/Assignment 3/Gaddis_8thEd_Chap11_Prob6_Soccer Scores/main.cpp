/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 2, 2017, 9:00 PM
 * Purpose:
 */

#include <iostream>
#include <string>

using namespace std;
//Structure
struct SoccerPl{
    string plName;
    int plNum;
    int points;
};

//Global Constants
const int SIZE=11;

int main(int argc, char** argv) {
    //Declare Variables
    SoccerPl players[SIZE];
    int total=0;  //Total points of players
    int points=0;
    int match;    //To locate the most points number and name
    
    //Input Information
    for(int i=0;i<SIZE;i++){
        cout<<"Player "<<i+1<<": ";
        getline(cin,players[i].plName);//Get the names here
        
        cout<<"Number: ";
        cin>>players[i].plNum;         //Get he numbers here
        while(players[i].plNum<0){
            cout<<"It should be greater than 0"<<endl;
            cin>>players[i].plNum;
        }
        
        cout<<"Points: ";
        cin>>players[i].points;        //Get the points here
        while(players[i].points<0){
            cout<<"It should be greater than 0"<<endl;
            cin>>players[i].points;
        }
        
        total+=players[i].points;      //Get the total points
        cin.ignore();
        cout<<endl;
    }
    
    points=players[0].points;
    for(int i=0;i<SIZE;i++){
        if(players[i].points>points){
            points=players[i].points;
            match=i;
        }
    }
    
    //Display Output
    //Display players information
    cout<<"--------------------"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<"Player "<<i+1<<": ";
        cout<<players[i].plName<<endl;
        cout<<"Number: ";
        cout<<players[i].plNum<<endl;
        cout<<"Points: ";
        cout<<players[i].points<<endl;
        cout<<"--------------------"<<endl;
    }
    
    cout<<endl;
    cout<<"The total score is "<<total<<" points."<<endl;//Display the total points
    cout<<"Number "<<players[match].plNum<<", ";         //Display the player's number
    cout<<players[match].plName<<", scores most with ";  //Display name
    cout<<points<<" points!"<<endl;                      //Display points
    
    return 0;
}