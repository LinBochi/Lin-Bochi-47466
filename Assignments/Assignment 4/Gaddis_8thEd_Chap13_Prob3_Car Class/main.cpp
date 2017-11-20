/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 19, 2017, 8:15 PM
 * Purpose: Demonstrate car information by using class
 */


#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
//Class
class Car{
    private:
        int yearModel;
        string make;
        int speed;
    public:
        Car(int,int);
        void setSped(int b){
            speed=b;
        }
        void setYear(int a){
            yearModel=a;
        }
        //void setMake(int);
        void Accessor(int,string,int);
        void accelerate(int);
        void brake(int);
            
};

Car::Car(int a, int b){
    setYear(a);
    setSped(b);
}

void Car::Accessor(int a, string b, int c){
    cout<<"Car year: "<<a<<endl;
    cout<<"Make of: "<<b<<endl;
    cout<<"Speed: "<<c<<endl;
}

void Car::accelerate(int a){
    cout<<"The speed now is "<<a<<endl;
}

void Car::brake(int a){
    cout<<"The speed now is "<<a<<endl;
}

int main(int argc, char** argv) {
    //Declare Variables
    int speed=0;
    Car car(2017,speed);    //Assign year and 0 to speed
    
    //Display Information
    car.Accessor(2017,"Medal",speed);
    
    //Acceleration
    car.accelerate(0);
    car.accelerate(5);
    car.accelerate(10);
    car.accelerate(15);
    car.accelerate(20);
    
    //Brake
    car.brake(20);
    car.brake(15);
    car.brake(10);
    car.brake(5);
    car.brake(0);

    return 0;
}

