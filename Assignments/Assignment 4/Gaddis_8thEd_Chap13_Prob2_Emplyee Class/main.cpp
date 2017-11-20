/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 19, 2017, 8:15 PM
 * Purpose: Demonstrate dates by using class
 */


#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
//Class
class Employee{
    private:
        string name;
        string idNumber;
        string department;
        string position;

    public:
        Employee(string,string,string,string); //constructor
        void setName(string a){
            name=a;
        }
        
        void setNum(string a){
            idNumber=a;
        }
        
        void setDep(string a){
            department=a;
        }
        
        void setPos(string a){
            position=a;
        }
        
        string getName(){
            return name;
        }
        
        string getNum(){
            return idNumber;
        }
        
        string getDep(){
            return department;
        }
        
        string getPos(){
            return position;
        }
        
};

Employee::Employee(string a,string b, string c, string d){
    setName(a);
    setNum(b);
    setDep(c);
    setPos(d);
}

int main(int argc, char** argv) {
    //Declare Variables
    //Display Information
    Employee em("Susan Meyers","47899","Accounting","Vice President");
    cout<<em.getName()<<" "<<em.getNum()<<" "<<em.getDep()<<" "<<em.getPos()<<endl;
    Employee em1("Mark Jones","39119","IT","Programmer");
    cout<<em1.getName()<<" "<<em1.getNum()<<" "<<em1.getDep()<<" "<<em1.getPos()<<endl;
    Employee em2("Joy Rogers","81774","Manufacturing","Engineer");
    cout<<em2.getName()<<" "<<em2.getNum()<<" "<<em2.getDep()<<" "<<em2.getPos()<<endl;
    

    return 0;
}

