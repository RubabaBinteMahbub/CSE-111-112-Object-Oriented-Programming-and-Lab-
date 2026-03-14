// Run time or dynamic polymorphism - Function overriding (only happens in the case of inheritance)

// Function overriding - Function overloading (only implementation difference is needed) between parent and child class.
// Parent class will be overridden. Only the one of child class will be called for a object of child class.

#include<bits/stdc++.h>
using namespace std;
class Parent{
public:
    void getInfo(){
         cout<<"Parent class"<<endl;
    }
};

class Child: public Parent{
public:
    void getInfo(){
         cout<<"Child class"<<endl;
    }
};
int main(){
    Child c1;
    c1.getInfo();

    Parent p1;
    p1.getInfo();

    return 0;
}
