// Compile time polymorphism - Function overloading

// Function overloading - Using more than one function having same names but different types or numbers of parameters under same class

#include<bits/stdc++.h>
using namespace std;
class Functions{
public:
    void func(int x){
         cout<< x<<endl;;
    }

    void func(int x, int y){
         if(x>y) cout<<"1 is greater than 2."<<endl;
         else cout<<"2 is greater than 1."<<endl;
    }
};
int main(){
    Functions f1;

    f1.func(1);
    cout<<endl;

    f1.func(1,2);
    cout<<endl;
  
    return 0;
}
