#include<bits/stdc++.h>
using namespace std;
class Wall{
private:
    double length, height;
public:
    Wall(double L, double H){
    length=L;
    height=H;
    }

    Wall(Wall &ob){
    length=ob.length;
    height=ob.height;
    }

    void calculateArea(){
    cout<<"Area : "<<length*height<<endl;
    }

    void calculateArea2(){
    cout<<"Area : "<<length*height<<endl;
    }
};
int main(){
    Wall w1(5,2);
    Wall w2=w1;

    w1.calculateArea();
    w2.calculateArea2();


return 0;
}
