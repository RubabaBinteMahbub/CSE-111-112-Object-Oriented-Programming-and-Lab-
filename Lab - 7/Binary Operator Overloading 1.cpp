// +, -,*, / egulo binary operator
// Karon kaj korte 2ta vatriable ba objecgt lage

// 2 ta object +/- korte bolle (kore 3rd 1 ta object a rakhte bolle) bujhbo operator overloading er kotha bujhieche

// Binary operator overloading

#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int real, imag;
public:
    Complex(int r=0, int i=0){
    real=r;
    imag=i;
    }

    Complex operator+(Complex const &obj){
    Complex res; 
    res.real=real+obj.real;
    res.imag=imag+obj.imag;
    return res;
    }

    void print(){
    cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main(){
     Complex c1(1,2), c2(3,4);
     c1.print();
     c2.print();

     Complex c3=c1+c2;
     c3.print();

     return 0;
}

// Default onstructor is mandetory for operator overloading
/*
Else you can also use
Complex operator+(Complex &ob){
    Complex res(real+ob.real, imag+ob.imag);
    return res;
}
*/
