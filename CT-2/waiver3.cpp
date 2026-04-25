#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;

    void SetAndShow1(string n, int a){
        name = n;
        age = a;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    virtual double waiver() = 0;
};

class Student : public Person{
public:
    double studentID, marks;

    void SetAndShow2(double id, double m){
        studentID = id;
        marks = m;
        cout << "Student ID : " << studentID << endl;
        cout << "Marks : " << marks << endl;
        cout << "Student Waiver (10%) : " << waiver() << endl;
    }

    double waiver(){
        return marks * 0.10;
    }
};

class Graduate : public Student{
public:
    string thesis;
    double thesisMarks;

    void SetAndShow3(string t, double m){
        thesis = t;
        thesisMarks = m;
        cout << "Thesis : " << thesis << endl;
        cout << "Thesis Marks : " << thesisMarks << endl;
        cout << "Graduate Waiver (20%) : " << waiver() << endl;
    }

    double waiver(){
        return thesisMarks * 0.20;
    }
};

int main(){
    Graduate g;

    g.SetAndShow1("Rubaba", 21);
    g.SetAndShow2(101, 85.5);
    g.SetAndShow3("AI Research", 90);

    return 0;
}
