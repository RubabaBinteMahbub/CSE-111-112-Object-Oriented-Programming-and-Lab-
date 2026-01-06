#include<iostream>
using namespace std;
class Circle{
public:
  double radius;

  void printRadius(){
  double area=3.1416*radius*radius;
  cout<<"Area = "<<area<<endl;
  }

  void printCircumference(){
  double circum=2*3.1416*radius;
  cout<<"Circumference = "<<circum<<endl;
  }
};
int main(){
    Circle myCircle;
    myCircle.radius=2;
    myCircle.printRadius();
    myCircle.printCircumference();
return 0;
}
