#include<iostream>
using namespace std;
const double PI=3.1416;
class Circle{
 public:
   double radius;
/*calcArea() ফাংশনটা হচ্ছে Circle class এর
ভেতরের ফাংশন আর radius হচ্ছে Circle class এর
নিজের ডাটা।তাই ফাংশনটা নিজের ঘরের জিনিস সরাসরি
ব্যবহার করতে পারে। Class-এর member function
নিজের member variable ব্যবহার করতে parameter
(ফরমালিটি) লাগে না।*/
   double calcArea(){
   return PI*radius*radius;
   }
};
int main(){
Circle obj;
obj.radius=2;

cout<<"Radius = "<<obj.radius<<endl;
cout<<"Area = "<<obj.calcArea()<<endl;
return 0;
}
