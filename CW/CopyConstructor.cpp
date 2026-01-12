#include<iostream>
using namespace std;
class Points{
  private :
  int x;
  int y;

  public :
  Points(int x1, int x2){
  x=x1;
  y=x2;
  }
  Points(const Points &p1){
  x=p1.x;
  y=p1.y;
  }
  int getX(){
  return x;
  }
  int getY(){
  return y;
  }
};
int main(){
Points p1(10,15);
Points p2=p1;
cout<<"p1.x = "<<p1.getX()<<" "<<"p1.y = "<<p1.getY()<<endl;
cout<<"p2.x = "<<p2.getX()<<" "<<"p2.y = "<<p2.getY()<<endl;
return 0;
}
