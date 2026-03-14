// Run time or dynamic polymorphism - virtual function

// Virtual function - Virtual function is a member function that you expect to be redefined in derived classes
// Work is almost similar to function overriding

#include<bits/stdc++.h>
using namespace std;
class Parent{
public:
    virtual void hello(){
            cout<<"Hello from parent."<<endl;
    }
};

class Child: public Parent{
public:
    void hello(){
         cout<<"Hello from child."<<endl;
    }
};
int main(){
    Child c1;
    c1.hello();

    Parent p1;
    p1.hello();

    return 0;
}
