// Shallow copy - A shallow coppy of an object copies all of the member values from one objecgt to another (like in copy constructor. ak object er attribute value hubohu copy kore onnotae rakhe.
// Deep copy - A deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory that the member points to.
// Normally amra shallow copy use kori. Kintu Dynamic Memory Allocation er khetre ("new" keyword / pointer use korar shomoy ) deep copy lage.
// Dynamic Memory Allocation - Age theke kichu declare korbo na. Runtime a "new" keyword dye tokhon-e direct memory nae use korar jonno. For example, new int[5].

//new = heap memory তে runtime এ memory allocate করা।

//int x = 5;
//Memory : Stack

//int *p = new int;
//or
//int *p;
//p = new int;
//Memory : Heap

//int *p = new int;
//*p = 10;
//cout << *p;

#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    double *cgpaPtr;

    // Paramiterized constructor
    Student(string name, double cgpa){
    this->name=name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
    }

    // Copy constructor
    Student (Student &ob){
    this->name=ob.name;
    cgpaPtr = new double;
    *cgpaPtr=*ob.cgpaPtr;
    }

    void getInfo(){
    cout<<"Name : "<<name<<endl;
    cout<<"CGPA : "<<*cgpaPtr<<endl; //derefer
    }

 ~Student(){
      delete cgpaPtr;
    }
};
int main(){
    Student s1("Kishor Pasha",8.8);
    s1.getInfo();
    cout<<endl;

    Student s2(s1);
     s2.name="Gina";
    *(s2.cgpaPtr)=9.8;
    s2.getInfo();
    cout<<endl;

return 0;
}

/*
Dynamic memory ব্যবহার করলে সাধারণত Rule of Three follow করা লাগে:
1.Constructor
2.Copy Constructor
3.Destructor
~Student(){
    delete cgpaPtr;
}
না দিলে memory leak হবে।
*/

// Shallow and deep copy er conceot is very very important to be a good programmer and for interviews.
