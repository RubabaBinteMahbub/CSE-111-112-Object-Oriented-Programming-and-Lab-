#include<iostream>
using namespace std;
class Circle{
 private:
   double radius;
 public:

   void calcArea(){
   double area=3.1416*radius*radius;
   cout<<"Radius = "<<radius<<endl;
   cout<<"Area = "<<area<<endl;
   }

   Circle(double r){
   radius=r;
   }
};

int main(){
  Circle obj(2);
  obj.calcArea();
  return 0;
}
