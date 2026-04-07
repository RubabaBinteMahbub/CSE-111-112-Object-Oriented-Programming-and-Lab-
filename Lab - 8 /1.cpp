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
  cout<<"("<<x<<","<<y<<")"<<endl;
  }

  friend Coord operator+(Coord &ob, int i);
  friend Coord operator+(int i, Coord &ob);
};

Coord operator+(Coord &ob, int i){
 Coord temp;
 temp.x=ob.x+i;
 temp.y=ob.y+i;
 return temp;
}

Coord operator+(int i, Coord &ob){
 Coord temp;
 temp.x=i+ob.x;
 temp.y=i+ob.y;
 return temp;
}

int main(){
    Coord c1(10,10);
    c1.display();
    cout<<endl;

    Coord c2=c1+10;
    c2.display();
    cout<<endl;

    Coord c3=10+c1;
    c3.display();
    cout<<endl;
    return 0;
}
