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

     friend Coord operator+(Coord ob1, Coord ob2);
};

Coord operator+(Coord ob1, Coord ob2){
      Coord temp;
      temp.x = ob1.x + ob2.x;
      temp.y = ob1.y + ob2.y;
      return temp;
}

int main(){
    Coord c1(1, 3), c2(2, 4);

    c1.display();
    cout<<endl;

    c2.display();
    cout<<endl;

    Coord c3 = c1 + c2;
    c3.display();
    cout<<endl;

    return 0;
}

