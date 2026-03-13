/* Multilevel Inheritance
 parent (person)
     |
 parent (student)
     |
  child (Graduate Student)
*/

#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;
};

class Student : public Person{
public:
    int roll;
};

class GraduateStudent : public Student{
public:
    string researchArea;
};

int main(){
    GraduateStudent g1;

    g1.name = "Musa Aman";
    g1.age = 20;
    g1.roll = 24;
    g1.researchArea = "Animal Behavior";

    cout<<"Name : "<<g1.name<<endl;
    cout<<"Age : "<<g1.age<<endl;
    cout<<"Roll : "<<g1.roll<<endl;
    cout<<"Research area : "<<g1.researchArea<<endl;
    return 0;
}
