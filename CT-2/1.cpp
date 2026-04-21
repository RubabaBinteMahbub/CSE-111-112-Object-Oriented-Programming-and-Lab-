#include<bits/stdc++.h>
using namespace std;

class Student{
 public:
  string ID, age, name;

  Student(string id,string a,string n){
  ID=id;
  age=a;
  name=n;
  }

  bool operator!=(Student &ob){
  return age!=ob.age;
  }

  bool operator<(Student &ob){
  return age<ob.age;
  }
};

int main(){
Student s1("355","35","erjiu"),s2("464","43","fhfhc");

if(s1!=s2) cout<<"s1!=s2"<<endl;
else cout<<"s1==s2"<<endl;

return 0;
}
