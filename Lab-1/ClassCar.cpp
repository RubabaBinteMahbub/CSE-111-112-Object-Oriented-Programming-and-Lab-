#include<iostream>
using namespace std;
class Car{
 public:
 string brand;
 string model;
 string year;
 void displayinfo(){
 cout<<" "<<brand<<" "<<model<<" "<<year<<endl;
 }
};
int main(){
   Car myCar;
   myCar.brand="Toyta";
   myCar.model="Corolla";
   myCar.year="2014";
   myCar.displayinfo();

return 0;
}
