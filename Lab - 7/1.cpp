#include<bits/stdc++.h>
using namespace std;

class Coord{
  private:
    int x, y;
  public:
    Coord(){
    x=0;
    y=0;
    }

    Coord(int a, int b){
    x=a;
    y=b;
    }

    Coord operator+(Coord &ob){
     Coord temp;
     temp.x = x + ob.x;
     temp.y = y + ob.y;
     return temp;
    }

    void Display(){
    cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
int main(){
    Coord c1(10, 10), c2(5, 3);
    Coord c3=c1+c2;

    c1.Display();
    c2.Display();
    c3.Display();
    return 0;
}
