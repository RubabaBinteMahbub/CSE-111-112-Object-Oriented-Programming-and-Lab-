// It is same for all types of access modes. Just you have to change the access mode name.

#include<bits/stdc++.h>
using namespace std;

class Parent{
protected:
    int protectedVar = 20;
public:
     int publicVar = 10;
};

class Child : public Parent{
public:
int getPublicVar() {
        return publicVar;
    }

    int getProtectedVar(){
        return protectedVar;
    }
};

int main(){
    Child c1;
    cout<<c1.getPublicVar()<<endl;
    cout<<c1.getProtectedVar()<<endl;
    return 0;
}

/*
Always write getter functions inside of the child class It will not show any error in 
doesn't matter which access mode for parent class you are using.
*/

