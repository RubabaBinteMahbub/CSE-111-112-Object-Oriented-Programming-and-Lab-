#include<bits/stdc++.h>
using namespace std;

class Distance{
public:
   int meters;

   Distance(int m=0){
   meters=m;
   }

   Distance operator++(){
   meters++;
   return *this;
   }

   Distance operator++(int){
   Distance temp=*this;
   meters++;
   return temp;
   }

   void Display(){
   cout<<"Meters : "<<meters<<endl;
   }
};

int main(){
    Distance d1(5);
    d1.Display();

    //Prefix
    ++d1;
    d1.Display();

    //Postfix
    d1++;
    d1.Display();
    return 0;
}
