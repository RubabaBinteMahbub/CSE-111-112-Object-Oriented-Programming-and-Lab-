#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float basic_salary;
    float DA;
    float HRA;
    float gross_salary;

    // Constructor
    Employee(int i, string n, float b, float d, float h) {
        id = i;
        name = n;
        basic_salary = b;
        DA = d;
        HRA = h;
        gross_salary = basic_salary + DA + HRA;
    }

    void display() {
        cout << "\n----- Employee Details -----" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "Gross Salary: " << gross_salary << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee* emp[n];   // Array of object pointers

    for(int i = 0; i < n; i++) {
        int id;
        string name;
        float basic, da, hra;

        cout << "\nEmployee " << i+1 << endl;

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basic;

        cout << "Enter DA: ";
        cin >> da;

        cout << "Enter HRA: ";
        cin >> hra;

        emp[i] = new Employee(id, name, basic, da, hra);
        // Constructor call
        // New dynamic memory allocator in C++
    }

    // Display all employees
    for(int i = 0; i < n; i++) {
        emp[i]->display();
    }

    return 0;
}
