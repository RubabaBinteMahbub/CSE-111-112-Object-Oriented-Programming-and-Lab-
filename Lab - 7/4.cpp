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

  Coord operator++(){
  ++x;
  ++y;
  return *this;
  }

  void Display(){
  cout<<"("<<x<<","<<y<<")"<<endl;
  }
};

int main(){
   Coord c1(1,2);
   c1.Display();
   cout<<endl;

   ++c1;
   c1.Display();
   return 0;
}
