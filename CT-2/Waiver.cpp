#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
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
    void setStudent(string n, int a, int id, float m) {
        setPerson(n, a); // base class function call
        studentID = id;
        marks = m;
    }

    void displayStudent() {
        displayPerson();
        cout << "Student ID: " << studentID << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Derived Class: Graduate
class Graduate : public Student {
private:
    float thesisMarks;

public:
    void setGraduate(string n, int a, int id, float m, float t) {
        setStudent(n, a, id, m);
        thesisMarks = t;
    }

    void displayGraduate() {
        displayStudent();
        cout << "Thesis Marks: " << thesisMarks << endl;
    }
};

// Main function
int main() {
    Graduate g;

    g.setGraduate("Rubaba", 22, 101, 85.5, 90.0);

    cout << "Graduate Student Information:\n";
    g.displayGraduate();

    return 0;
}
