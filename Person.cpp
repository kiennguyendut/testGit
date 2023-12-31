#pragma once

#include<iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;
public:
    Person(string name, int age, string address){
        this->name = name;
        this->age = age;
        this->address = address;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    string getAddress(){
        return address;
    }

    void setName(string name){
        this->name = name;
    }

    void setAge(int age){
        this->age = age;
    }

    void setAddress(string address){
        this->address = address;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }



};