#include<bits/stdc++.h>
using namespace std;
class Point{
private:
    int x, y;
public:
    Point(int a, int b){
    x=a;
    y=b;
    }

    Point(const Point &ob){
    x=ob.x;
    y=ob.y;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }
};
int main(){
    Point p1(5,2);

    cout<<"x of p1 : "<<p1.getX()<<endl;
    cout<<"y of p1 : "<<p1.getY()<<endl;

    cout<<endl;

    Point p2=p1;
    cout<<"x of p2 : "<<p1.getX()<<endl;
    cout<<"y of p2 : "<<p1.getY()<<endl;

    return 0;
}
