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

  int operator==(Coord const &ob){
   return x==ob.x;
  }

  void Display(){
  cout<<"("<<x<<","<<y<<")"<<endl;
  }
};

int main(){
   Coord c1(1,2),c2(3,4), c3(1,2);

   if(c1==c2) cout<<"Same"<<endl;
   else cout<<"Differs"<<endl;

   cout<<endl;

   if(c1==c3) cout<<"Same"<<endl;
   else cout<<"Differs"<<endl;

   return 0;
}
