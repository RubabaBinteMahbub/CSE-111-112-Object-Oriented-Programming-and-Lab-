#include<bits/stdc++.h>
using namespace std;
class Point3D{
private:
  int x,y,z;
public:
  Point3D(int a=0, int b=0, int  c=0){
   x=a;
   y=b;
   z=c;
  }

  void display(){
   cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
  }

  friend Point3D operator+(Point3D &ob, int i);
  friend Point3D operator+(int i,Point3D &ob);

  Point3D operator-(Point3D &ob){
   Point3D temp;
   temp.x=x-ob.x;
   temp.y=y-ob.y;
   temp.z=z-ob.z;
   return temp;
  }
};

Point3D operator+(Point3D &ob, int i){
  Point3D temp;
  temp.x=ob.x+i;
  temp.y=ob.y+i;
  temp.z=ob.z+i;
  return temp;
}

Point3D operator+(int i,Point3D &ob){
  Point3D temp;
  temp.x=i+ob.x;
  temp.y=i+ob.y;
  temp.z=i+ob.z;
  return temp;
}
int main(){
Point3D p1(1,2,3);
p1.display();
cout<<endl;

Point3D p2=p1+10;
p2.display();
cout<<endl;

Point3D p3=10+p1;
p3.display();
cout<<endl;

Point3D p4(10,10,10),p5(5,5,5);
Point3D p6=p4-p5;
p6.display();
cout<<endl;

return 0;
}
