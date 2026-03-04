// Binary operator overloading
#include<bits/stdc++.h>
using namespace std;
class Distance{
public:
    int feet, inch;

    Distance(int f=0, int i=0){
    feet=f;
    inch=i;
    }

    Distance operator+(Distance &d2){
    Distance d3;
    d3.feet=feet+d2.feet;
    d3.inch=inch+d2.inch;
    return d3;
    }

    void print(){
    cout<<feet<<"'"<<inch<<endl;
    }
};
int main(){
      Distance d1(1,2), d2(3,4);
      Distance d3=d1+d2;

      d1.print();
      d2.print();
      d3.print();
      return 0;
}
