#include<iostream>
using namespace std;
class Vehicle{
   private :
      int speed;
   public :
      Vehicle(int sp){
        speed=sp;
      }
      
      int getSpeed(){
          return speed;
       }
};
int main(){
    int a;
    cout<<"Enter the speed : ";
    cin>>a;

    Vehicle V1(a);
    Vehicle *pt;
    pt=&V1;

    cout<<"Printing speed without using pointer : "<<V1.getSpeed()<<endl;
    cout<<"Printing speed using pointer : "<<pt->getSpeed()<<endl;

    return 0;
}
