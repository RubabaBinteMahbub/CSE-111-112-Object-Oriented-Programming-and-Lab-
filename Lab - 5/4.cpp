#include<iostream>
#include<cmath>
using namespace std;
class Point2D{
    private :
        double x, y;
    public :
        Point2D(double a, double b){
					x=a;
 					y=b;
        }
    friend double calculateDistance(Point2D &ob1, Point2D &ob2);
};

double calculateDistance(Point2D &ob1, Point2D &ob2){
       double d ;
       d=sqrt(pow((ob1.x-ob2.x),2)
            + pow((ob1.y-ob2.y),2));
       return d;
}

int main(){
    double x1, y1, x2, y2;

    cout<<"Enter first point : ";
    cin>>x1>>y1;
    cout<<"Enter first point : ";
    cin>>x2>>y2;

    Point2D P1(x1, y1), P2(x2, y2);
    cout<<"Distance of two points : "<<calculateDistance(P1, P2);

    return 0;
}
