/* 
 * File:   Person.h
 * Author: Bochi Lin
 * Created on October 20, 2017, 6:09 PM
 */

#ifndef PERSON_H
#define PERSON_H
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


#endif /* PERSON_H */

