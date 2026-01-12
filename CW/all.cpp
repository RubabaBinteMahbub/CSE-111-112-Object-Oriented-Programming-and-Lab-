//Access modifier(private, public)
//Constructor (parameterized, default)
#include<iostream>
using namespace std;
class Rectangle{
   private:
   double length;
   double width;
   public:
   Rectangle(double l,double w){
   length=l;
   width=w;
   }
   Rectangle(){
   length=0;
   width=0;
   }
   double area(){
   return length*width;
   }
   void DisplayInfo(){
   cout<<"Length = "<<length<<" "<<"Width = "<<width<<" "<<"Area = "<<area()<<endl;
   }
};
int main(){
Rectangle obj1(5,2);
obj1.DisplayInfo();
Rectangle obj2();
obj2.DisplayInfo();
return 0;
}
