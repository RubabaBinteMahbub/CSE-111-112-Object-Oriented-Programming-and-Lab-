#include<iostream>
using namespace std;

class MyClass{
private :
    int a;
public :
   MyClass(int x){
     a=x;
   }

   int getA(){
   return a;
   }

   void display(){
       cout<<"Value of a = "<<a<<endl;
   }
};

MyClass createObject(){
    MyClass ob(5);
    return ob;
}

int main(){
MyClass m = createObject();
m.display();
return 0;
}
