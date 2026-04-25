#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    void info(string n, int a) {
        name = n;
        age = a;

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class: Student
class Student : public Person {
protected:
    int studentID;
    float marks;

public:
    void info(string n, int a, int id, float m) {
        Person::info(n, a);  // base class call

        studentID = id;
        marks = m;

        cout << "Student ID: " << studentID << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Derived Class: Graduate
class Graduate : public Student {
private:
    float thesisMarks;

public:
    void info(string n, int a, int id, float m, float t) {
        Student::info(n, a, id, m); // parent call

        thesisMarks = t;

        cout << "Thesis Marks: " << thesisMarks << endl;
    }
};

// Main function
int main() {
    Graduate g;

    g.info("Rubaba", 21, 101, 85.5, 90.0);

    return 0;
}
