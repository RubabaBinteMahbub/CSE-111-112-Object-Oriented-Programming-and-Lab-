/*Hierarchical/Tree Inheritance
               parent
              (person)
               /    \
          child     child
        (student)  (teacher)
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

class Teacher  : public Person{
public:
    string subject;
    double salary;
};

int main(){
    Student s1;

    s1.name = "Humayun Ahmed";
    s1.age = 25;
    s1.roll = 1;

    cout<<"Name : "<<s1.name<<endl;
    cout<<"Age : "<<s1.age<<endl;
    cout<<"Roll : "<<s1.roll<<endl;
    cout<<endl;


    Teacher t1;

    t1.name = "";
    t1.age = 30;
    t1.subject = "Chemistry";
    t1.salary = 1000;

    cout<<"Name : "<<t1.name<<endl;
    cout<<"Age : "<< t1.age<<endl;
    cout<<"Subject : "<<t1.subject<<endl;
    cout<<"Salary : "<<t1.salary<<endl;
    cout<<endl;
    return 0;
}
