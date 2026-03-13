// Private mode of inheritance
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

class Student : private Person{ // name ar age ei class a eshe private hoe gelo. Tai ei class er object er jonno ei duita class er baire directly access kora jabe na.
public:
    int roll;

    Student(string name, int age, int roll) : Person(name,age){
    this->roll = roll;
    }

    //void display(){
   // cout<<"Name : "<<name<<endl;
    //cout<<"Age : "<<age<<endl;
   // cout<<"Roll : "<<roll<<endl;
   // }
};
int main(){
    Student s1("Robin Milford", 20, 12);
    //s1.display();
    cout<<s1.name; // error
    cout<<endl;

    return 0;
}

/*
name ar age ei class a eshe private hoe gelo. Tai ei class er object er jonno ei duita class er baire directly access
kora jabe na. Error dakhabe.
*/


