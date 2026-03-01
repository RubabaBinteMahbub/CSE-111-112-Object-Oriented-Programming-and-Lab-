#include<bits/stdc++.h>
using namespace std;
class Student{
public:
      string name;
      double roll, sub1, sub2, sub3;

      Student(string n, double r, double s1, double s2, double s3){
      name=n;
      roll=r;
      sub1=s1;
      sub2=s2;
      sub3=s3;
      }

      double total(){
      return sub1+sub2+sub3;
      }

      double avg(){
      return (sub1+sub2+sub3)/3;
      }

      void Display(){
      cout<<"Name : "<<name<<endl;
      cout<<"Roll : "<<roll<<endl;
      cout<<"sub1 : "<<sub1<<endl;
      cout<<"sub1 : "<<sub1<<endl;
      cout<<"sub1 : "<<sub1<<endl;
      cout<<"Total : "<<total()<<endl;
      cout<<"Average : "<<avg()<<endl;
      }
};
int main(){
      Student st1("Rubaba", 260, 10, 10, 10);
      st1.Display();
      return 0;
}
