/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 17, 2017, 4:02 PM
 * Purpose: Translate amount into English by using class
 */

#include <iostream>
#include <string>

using namespace std;
//Class
class Numbers{
    private:
        int number;
        string lessThan20[20] = {"zero", "one","two","three","four",
                                 "five","six","seven","eight","nine",
                                 "ten","eleven","twelve","thirteen","fourteen",
                                 "fifteen","sixteen","seventeen", "eighteen", "nineteen"}; 
        string hundred = "hundred";
        string thousand = "thousand";
    public:
        Numbers(int); //constructor
        void print(int num){
            int n;
            n=num/1000;
            if(n>0) 
                cout<<lessThan20[n]<<" "<<thousand<<" ";
            num%=1000;
            n=num/100;
            if(n>0)
                cout<<lessThan20[n]<<" "<<hundred<<" ";
            num%=100;
            if (num>=20){
		n=num/10;
		if (n > 0)
                    cout<<lessThan20[n] <<" ";
            }
            
            else if (num>=10)
            {
		cout << lessThan20[num] <<" ";

            }
            else{
                num %= 10;
                if (num > 0)
                    cout << lessThan20[num];
                cout << " ";
            }
    }
    
};

Numbers::Numbers(int a){
    while(a<0||a>9999){
        cout<<"Invalid! Enter again: ";
        cin>>a;
    }
}

int main(int argc, char** argv) {
    //Declare variables
    int num;
    
    //Input information
    cout<<"Enter a number from 0 to 9999."<<endl;
    cout<<"#: ";
    cin>>num;
    Numbers nums(num); //Input validation
    
    //Display Information
    nums.print(num);

    return 0;
}

