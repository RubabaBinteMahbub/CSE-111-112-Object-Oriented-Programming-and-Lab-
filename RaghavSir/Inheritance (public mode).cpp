// Public mode of inheritance 

#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;

    Person(){
    cout<<"Parent class constructor.\n";
    }

    ~Person(){
    cout<<"Parent class destructor.\n";
    }
};

class Student : public Person{
public:
    int roll;

    Student(){
    cout<<"Child class constructor.\n";
    }

    void display(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Roll : "<<roll<<endl;
    }

    ~Student(){
    cout<<"Child class destructor.\n";
    }
};
int main(){
    Student s1;
    s1.name="Georgina Parker";
    s1.age=20;
    s1.roll=24;

    cout<<endl;

    s1.display();
    cout<<endl;
    return 0;
}

/*
Default constructor : parent class er ta age call hoy
Destructor : child class er ta age call hoy
*/
