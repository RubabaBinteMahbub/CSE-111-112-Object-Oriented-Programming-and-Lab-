#include<iostream>
using namespace std;
class Circle{
 private:
   double radius;
 public:

   double calcArea(){
   return 3.1416*radius*radius;
   }

   void DisplayInfo(){
   cout<<"Radius = "<<radius<<endl;
   cout<<"Area = "<<calcArea()<<endl;
   }

   Circle(double r){
   radius=r;
   }
};

int main(){
  Circle obj(2);
  obj.calcArea();
  obj.DisplayInfo();
  return 0;
}
