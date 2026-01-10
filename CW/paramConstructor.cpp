#include<iostream>
#include<string>
using namespace std;
const double PI=3.1416;
class Circle{
  public:
  double radius;
  string color;
  double thickness;
  Circle(double r,string c, double t){
  radius=r;
  color=c;
  thickness=t;
  }
  void DisplayInfo(){
  cout<<radius<<" "<<color<<" "<<thickness<<endl;
  }
  double calcArea(){
  return PI*radius*radius;
  }
};
int main(){
   Circle obj(5,"Blue",2.5);
   obj.DisplayInfo();
   cout<<"Radius = "<<obj.radius<<endl;
   cout<<"Area = "<<obj.calcArea()<<endl;
	 return 0;
}
