/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 17, 2017, 8:58 PM
 * Purpose: Essay class
 */

#include <iostream>
#include <string>

using namespace std;
//Class
class Essay{
    private:
        int gram;
        int spell;
        int corre;
        int cont;
    public:
        Essay(){
            cout<<"Get the essay points here."<<endl;
            cout<<"grammar:";
            cin>>gram;
            cout<<"spell:";
            cin>>spell;
            cout<<"correct:";
            cin>>corre;
            cout<<"content:";
            cin>>cont;
        }
        void showpoints(){
            cout<<"Grammar: "<<gram<<endl;
            cout<<"Spelling: "<<spell<<endl;
            cout<<"Correct Length: "<<corre<<endl;
            cout<<"Content: "<<cont<<endl;
        }
};   
        
int main(int argc, char** argv) {
    //Declare variables
    Essay es;
    
    //Display Output
    es.showpoints();
    
    return 0;
}

