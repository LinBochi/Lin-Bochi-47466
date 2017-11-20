/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 20, 2017, 6:41 PM
 * Purpose:
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
//Class
class Inventory{
    private:
        int iNum;   //Item number
        int quan;   //Quantity
        float cost;
        float total;
        
    public:
        void setItem(int);
        void setQuan(int);
        void setCost(float);
        void setTot(float);
        int getItem();
        int getQuan();
        float getCost();
        float getTot();
};

//Function Prototypes
void Inventory::setItem(int a){
    iNum=a;
}

void Inventory::setQuan(int a){
    quan=a;
}

void Inventory::setCost(float a){
    cost=a;
}

void Inventory::setTot(float a){
    total=a;
}

int Inventory::getItem(){
    return iNum;
}

int Inventory::getQuan(){
    return quan;
}

float Inventory::getCost(){
    return cost;
}

float Inventory::getTot(){
    return total;
}

int main(int argc, char** argv) {
    //Declare Variables
    Inventory inven;
    int item;    //Item number
    int quanNum; //Item quantity
    float iCost; //Item cost
    float iTot;  //Item total
    
    //Input Information
    cout<<"Which item?"<<endl;
    cin>>item;
    cout<<"How many items?"<<endl;
    cin>>quanNum;
    cout<<"What is the price per item?"<<endl;
    cin>>iCost;
    
    //Calculation
    iTot=iCost*(1.0)*quanNum;
    
    //Store data
    inven.setItem(item);    //Item number
    inven.setQuan(quanNum); //Item quantity
    inven.setCost(iCost);   //Item cost
    inven.setTot(iTot);     //item total
    
    //Display Output
    cout<<"Item "<<inven.getItem()<<endl;
    cout<<"Quantity: "<<inven.getQuan()<<endl;
    cout<<"Cost: "<<inven.getCost()<<endl;
    cout<<"Total: "<<inven.getTot()<<endl;

    return 0;
}

