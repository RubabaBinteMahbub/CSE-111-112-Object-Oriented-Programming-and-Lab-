#include<bits/stdc++.h>
using namespace std;
class Circle{
private:
    double radius;
public:
    Circle(double r){
    radius=r;
    }

    double area(){
    return 3*radius*radius;
    }

    double circumference(){
    return 2*3*radius;
    }

    void display(){
    cout<<"Radius : "<<radius<<endl;
    cout<<"Area : "<<area()<<endl;
    cout<<"Circumference : "<<circumference()<<endl;
    }
};
int main(){
      Circle c1(2);
      c1.display();
      return 0;
}
