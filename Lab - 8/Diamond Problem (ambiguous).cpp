#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
};

class Faculty : public Person {
};

class TA : public Student, public Faculty {
};

int main() {
    TA t;
  
    t.name = "Rahim";   // ❌ ambiguous
  
    cout << t.name;

    return 0;
}

/*
Problem কোথায়?
👉 TA এর ভিতরে:
Student → Person → name
Faculty → Person → name
👉 তাই TA তে দুইটা name আছে
👉 compiler বুঝতে পারে না কোনটা use করবে।
*/
