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
   cout<<"Enter the name : ";
   cin>>s1.name;
   cout<<"Enter the roll : ";
   cin>>s1.roll;
   cout<<"Enter the gpa : ";
   cin>>s1.gpa;
   cout<<"Printed info using method : ";
   s1.DisplayInfo();
return 0;
}
