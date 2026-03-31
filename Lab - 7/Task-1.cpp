#include<bits/stdc++.h>
using namespace std;

class Number{
 public:
  int x;

  Number(int a=0){
  x=a;
  }

  Number operator+(Number &ob){
  Number temp;
  temp.x=x+ob.x;
  return temp;
  }

  Number operator*(Number &ob){
  Number temp;
  temp.x=x*ob.x;
  return temp;
  }

  Number operator++(){
  ++x;
  return *this;
  }

  void display(){
  cout<<"x = "<<x<<endl;
  }
};
int main(){
    Number n1(5), n2(2);

    Number n3=n1+n2;
    Number n4=n1*n2;

    n1.display();
    n2.display();
    cout<<endl;

    n3.display();
    n4.display();
    cout<<endl;

    ++n1;
    n1.display();
return 0;
}
