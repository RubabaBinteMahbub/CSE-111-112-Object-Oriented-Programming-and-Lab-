// Solving diamond problem / ambiguity
#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : virtual public Person {
};

class Faculty : virtual public Person {
};

class TA : public Student, public Faculty {
};

int main() {
    TA t;

    t.name = "Rahim";   // ✅ no ambiguity

    cout << t.name;

    return 0;
}

// Output : Rahim
