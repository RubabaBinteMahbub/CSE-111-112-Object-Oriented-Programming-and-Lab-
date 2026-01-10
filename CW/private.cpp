#include<iostream>
using namespace std;
class Circle{
 private:
   double radius;
 public:
   double calcArea(){
   return 3.1416*radius*radius;
   }
   Circle(double r){
   radius=r;
   }
};
int main(){
  Circle obj(2);
  cout<<"Area = "<<obj.calcArea()<<endl;
}
