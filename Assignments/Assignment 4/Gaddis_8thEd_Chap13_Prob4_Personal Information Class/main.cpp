/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 20, 2017, 4:58 PM
 * Purpose: Hold information by using class
 */

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;
//Class
class Person{
    private:
        string name;
        string number;
        string address;
        int age;
        
    public:
        void setName(string);
        void setNum(string);
        void setAdd(string);
        void setAge(int);
        string getName() const;
        string getNum() const;
        string getAdd() const;
        int getAge() const;
};

//Function Prototypes
void Person::setName(string a){
    name=a;
}

void Person::setNum(string a){
    number=a;
}

void Person::setAdd(string a){
    address=a;
}

void Person::setAge(int a){
    age=a;
}

string Person::getName() const{
    return name;
}

string Person::getAdd() const{
    return address;
}

string Person::getNum() const{
    return number;
}

int Person::getAge() const{
    return age;
}

int main(int argc, char** argv) {
    //Declare Variables
    Person person_1; //Myself
    Person person_2; //My friend
    Person person_3; //My family
    string pNum;     //Phone number
    string hAdd;     //Home address
    string pName;    //Person's name
    int pAge;          //Person's age
    
    //Input Information
    //Person 1
    cout<<"Please enter person's name: ";
    getline(cin,pName);
    person_1.setName(pName);
    cout<<"Please enter person's address: ";
    getline(cin,hAdd);
    person_1.setAdd(hAdd);
    cout<<"Please enter person's number: ";
    getline(cin,pNum);
    person_1.setNum(pNum);
    cout<<"Please enter person's age: ";
    cin>>pAge;
    person_1.setAge(pAge);
    
    //Person 2
    cin.ignore();
    cout<<"Please enter person's name: ";
    getline(cin,pName);
    person_2.setName(pName);
    cout<<"Please enter person's address: ";
    getline(cin,hAdd);
    person_2.setAdd(hAdd);
    cout<<"Please enter person's number: ";
    getline(cin,pNum);
    person_2.setNum(pNum);
    cout<<"Please enter person's age: ";
    cin>>pAge;
    person_2.setAge(pAge);
    
    //Person 3
    cin.ignore();
    cout<<"Please enter person's name: ";
    getline(cin,pName);
    person_3.setName(pName);
    cout<<"Please enter person's address: ";
    getline(cin,hAdd);
    person_3.setAdd(hAdd);
    cout<<"Please enter person's number: ";
    getline(cin,pNum);
    person_3.setNum(pNum);
    cout<<"Please enter person's age: ";
    cin>>pAge;
    person_3.setAge(pAge);
    
    //Display information
    //Person 1
    cout<<"Name: "<<person_1.getName()<<endl;
    cout<<"Age: "<<person_1.getAge()<<endl;
    cout<<"Number: "<<person_1.getNum()<<endl;
    cout<<"Address: "<<person_1.getAdd()<<endl;
    
    //Person 2
    cout<<"Name: "<<person_2.getName()<<endl;
    cout<<"Age: "<<person_2.getAge()<<endl;
    cout<<"Number: "<<person_2.getNum()<<endl;
    cout<<"Address: "<<person_2.getAdd()<<endl;
    
    //Person 3
    cout<<"Name: "<<person_3.getName()<<endl;
    cout<<"Age: "<<person_3.getAge()<<endl;
    cout<<"Number: "<<person_3.getNum()<<endl;
    cout<<"Address: "<<person_3.getAdd()<<endl;

    return 0;
}

