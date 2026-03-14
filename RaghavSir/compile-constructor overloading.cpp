// Compile time polymorphism - Constructor overloading

// Constructor overloading - Using more than one constructor having different types or numbers of parameters under same class
 
#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;

    Student(){
    cout<<"non-parameterized constructor"<<endl;
    }

    Student(string name){
    this->name=name;
    cout<<"parameterized constructor"<<endl;
    }
};

int main(){
    Student s1;
    cout<<endl;

    Student s2("Peter Parker");
    cout<<endl;

    return 0;
}
