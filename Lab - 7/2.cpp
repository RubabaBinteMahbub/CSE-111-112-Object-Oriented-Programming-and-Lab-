#include<bits/stdc++.h>
using namespace std;
class Complex{
 public:
  int x, y;

  Complex(int a=0, int b=0){
  x = a;
  y = b;
  }

  Complex operator+(Complex &ob){
  Complex temp;
  temp.x = x + ob.x;
  temp.y = y + ob.y;
  return temp;
  }

  Complex operator-(Complex &ob){
  Complex temp;
  temp.x = x - ob.x;
  temp.y = y - ob.y;
  return temp;
  }

  Complex operator*(Complex &ob){
  Complex temp;
  temp.x = (x*ob.x)-(y*ob.y);
  temp.y = (x*ob.y) + (y*ob.x);
  return temp;
  }

  void Display(){
  cout<<x<<" + ("<<y<<")i"<<endl;
  }
};
int main(){
    Complex c1(1,2), c2(3,4);
    Complex c3 = c1+c2;
    Complex c4 = c1-c2;
    Complex c5 = c1*c2;

    c1.Display();
    c2.Display();
    cout<<endl;
    c3.Display();
    c4.Display();
    c5.Display();
    return 0;
}
