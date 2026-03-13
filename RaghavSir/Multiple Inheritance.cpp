/* Multiple Inheritance
parent       parent
(student)     (teacher)
    \       /
      child
      (TA)
*/

#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int age;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher{

};

int main(){
    TA t1;

    t1.name = "Humayun Ahmed";
    t1.age = 25;
    t1.subject = "Chemistry";
    t1.salary = 100;

    cout<<"Name : "<<t1.name<<endl;
    cout<<"Age : "<< t1.age<<endl;
    cout<<"Subject : "<<t1.subject<<endl;
    cout<<"Salary : "<<t1.salary<<endl;

    return 0;
}
