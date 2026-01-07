#include<iostream>
using namespace std;
class Student{
 public:
  string name;
  int roll;
  float gpa;
  void DisplayInfo(){
  cout<<name<<" "<<roll<<" "<<gpa<<endl;
  }
};
int main(){
   Student s1;
   s1.name="Raghav Garg";
   s1.roll=157;
   s1.gpa=7.5;
   s1.DisplayInfo();

   Student s2;
   s2.name="Himangshu";
   s2.roll=367;
   s2.gpa=6.8;
   s2.DisplayInfo();

return 0;
}
