#include<bits/stdc++.h>
using namespace std;
class Rectangle{
   private:
       double length, width;
   public:
       Rectangle(double l, double w){
       length=l;
       width=w;
       }

       double area(){
       return length*width;
       }

       double perimeter(){
       return 2*(length+width);
       }

       void display(){
       cout<<"Area = "<<area()<<endl;
       cout<<"Perimeter = "<<perimeter()<<endl;
       }
};
int main(){
      Rectangle r1(5,2);
      r1.display();
      return 0;
}
