/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 1, 2017, 10:53 AM
 * Purpose: Display the movie information by using structure
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;
//Structure
struct MovieData{
    string title;
    string director;
    int yrRel;
    int runTime;
    float profit;
};

//Function Prototypes
void display1(MovieData);
void display2(MovieData);

int main(int argc, char** argv) {
    //Declare Variables
    MovieData movie_1;
    MovieData movie_2;
    
    //Input Information
    //Movie 1
    cout<<"Movie: ";
    getline(cin,movie_1.title);//Enter movie name
    cout<<"Director: ";
    getline(cin,movie_1.director);//Enter movie's director
    cout<<"Year Released: ";
    cin>>movie_1.yrRel;//Enter movie's released year
    cout<<"Running Time: ";
    cin>>movie_1.runTime;//Enter movie's running time
    cout<<"Revenues: ";
    cin>>movie_1.profit;//Enter movie's profit
    cout<<endl;
    
    //Movie 2
    cin.ignore();
    cout<<"Movie: ";
    getline(cin,movie_2.title);//Enter movie name
    cout<<"Director: ";
    getline(cin,movie_2.director);//Enter movie's director
    cout<<"Year Released: ";
    cin>>movie_2.yrRel;//Enter movie's released year
    cout<<"Running Time: ";
    cin>>movie_2.runTime;//Enter movie's running time
    cout<<"Revenues: ";
    cin>>movie_2.profit;//Enter movie's profit
    cout<<endl;
    
    //Display Output
    //Call a function
    display1(movie_1);
    cout<<endl;
    display2(movie_2);

    return 0;
}
void display1(MovieData m){
    cout<<"Movie: ";
    cout<<m.title<<endl;
    cout<<"Director: ";
    cout<<m.director<<endl;
    cout<<"Year Released: ";
    cout<<m.yrRel<<endl;
    cout<<"Running Time: ";
    cout<<m.runTime<<endl;
    cout<<"Profit or loss: ";
    cout<<m.profit<<endl;
}

void display2(MovieData m){
    cout<<"Movie: ";
    cout<<m.title<<endl;
    cout<<"Director: ";
    cout<<m.director<<endl;
    cout<<"Year Released: ";
    cout<<m.yrRel<<endl;
    cout<<"Running Time: ";
    cout<<m.runTime<<endl;
    cout<<"Profit or loss: ";
    cout<<m.profit<<endl;
}