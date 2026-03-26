#include<bits/stdc++.h>
using namespace std;

class Parent{
protected:
    int protectedVar = 20;
public:
     int publicVar = 10;

     int getProtectedVar(){
        return protectedVar;
    }
};

class Child : public Parent{ // All same as normal class. Same same inside the child class.
public:

};

int main(){
    Child c1;
    cout<<c1.publicVar<<endl;
    cout<<c1.getProtectedVar()<<endl;
  
    // cout<<c1.publicVar<<endl;
    //It will show an error as it's not inside the parent class or child class.
  
    return 0;
}

