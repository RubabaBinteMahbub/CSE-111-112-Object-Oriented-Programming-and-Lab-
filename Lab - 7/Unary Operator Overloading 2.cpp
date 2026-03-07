// using returning object 
#include<bits/stdc++.h>
using namespace std;

class Distance{
public:
    int feet, inch;

    Distance(int f=0, int i=0){
        feet = f;
        inch = i;
    }

    Distance operator-(){
        Distance res;
        res.feet = feet--;
        res.inch = inch--;
        return res;
    }

    void display(){
        cout << "Feet and inches : " << feet << " " << inch << endl;
    }
};

int main(){
    Distance d1(8,9);
    Distance d2;
    d2 = -d1;

    d1.display();
    d2.display();

    return 0;
}
