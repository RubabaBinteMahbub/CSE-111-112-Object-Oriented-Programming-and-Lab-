
#include<bits/stdc++.h>
using namespace std;

class Student{
 public:
  string ID;
  int age;
  string name;

  Student(string id,int a,string n){
  ID=id;
  age=a;
  name=n;
  }

 friend bool operator!=(Student ob1, Student ob2);
 friend bool operator<(Student ob1, Student ob2);
};

  bool operator!=(Student ob1, Student ob2){
  return ob1.age!=ob2.age;
  }

  bool operator<(Student ob1, Student ob2){
  return ob1<ob2;
  }

int main(){
Student s1("355",35,"erjiu"),s2("464",43,"fhfhc");

if(s1!=s2) cout<<"s1!=s2"<<endl;
else cout<<"s1==s2"<<endl;

if(s1<s2) cout<<"s1<s2"<<endl;
else cout<<"s1>s2"<<endl;

return 0;
}
