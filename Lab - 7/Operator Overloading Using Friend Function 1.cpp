// Operator overloading using friend (global) function and returning object.
#include<bits/stdc++.h>
using namespace std;
class Coord{
  private:
     int x, y;
  public:
     Coord(int a=0, int b=0){
     x=a;
     y=b;
     }

     void display(){
     cout<<"X = "<<x<<endl;
     cout<<"Y = "<<y<<endl;
     }

     friend Coord operator+(Coord ob1, int i);
     friend Coord operator+(int i, Coord ob1);
};

Coord operator+(Coord ob1, int i){
      Coord temp;
      temp.x = ob1.x + i;
      temp.y = ob1.y + i;
      return temp;
}

Coord operator+(int i, Coord ob1){
      Coord temp;
      temp.x = i + ob1.x;
      temp.y = i + ob1.y;
      return temp;
}

int main(){
    Coord c1(10, 10);
    c1.display();
    cout<<endl;

    Coord c2 = c1 +10;
    c2.display();
    cout<<endl;

    Coord c3 = 20 + c1;
    c3.display();
    cout<<endl;

    return 0;
}
