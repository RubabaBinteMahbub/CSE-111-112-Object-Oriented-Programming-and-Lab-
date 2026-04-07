#include<bits/stdc++.h>
using namespace std;
class Student{
private:
   double English,Bangla,Math;
public:
   Student(double e=0,double b=0,double m=0){
    English=e;
    Bangla=b;
    Math=m;
   }

   double avg(){
   return (English+Bangla+Math)/3;
   }

   bool operator<(Student &ob){
   return avg()<ob.avg();
   }

   bool operator!=(Student &ob){
   return avg()!=ob.avg();
   }
};
int main(){
Student s1(10,10,10), s2(100,100,100);

if(s1<s2) cout<<"s2 scored more."<<endl;
else cout<<"s1 scored more."<<endl;

if(s1!=s2) cout<<"Averages of both students are not same."<<endl;
else cout<<"Averages of both students are same."<<endl;

return 0;
}
