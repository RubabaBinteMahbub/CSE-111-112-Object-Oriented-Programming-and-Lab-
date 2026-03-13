/* Single inheritance - 1 parent , 1 child
parent
   |
child
*/
// Public mode of inheritance 

#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;

    Person(string name, int age){
    this->name = name;
    this->age = age;
    }
};

class Student : public Person{
public:
    int roll;

    Student(string name, int age, int roll) : Person(name,age){ // prapto argument mane name ar age er value ke person er parameterized  a pass korchi
    this->roll = roll;
    }

    void display(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Roll : "<<roll<<endl;
    }
};
int main(){
    Student s1("Robin Milford", 20, 12);
    s1.display();
    cout<<endl;

    return 0;
}

/*
Parameterized constructor : child er parameterized constructor er shathe parent er ta keo call korte hoy
*/

