#include<iostream>
using namespace std;

class Student;

class Faculty{
  public:
    void Display(Student &ob);
};

class Student{
  private :
     int studentID;
  protected :
     string name;
  public :
     Student(int ID, string n){
     studentID=ID;
     name=n;
     }

     friend void Faculty :: Display(Student &ob);
};

void Faculty :: Display(Student &ob){
cout<<"ID of student : "<<ob.studentID<<endl;
cout<<"Name of student : "<<ob.name<<endl;
}

int main(){
      Student s1(260, "Rubaba");
      Faculty f1;
      f1.Display(s1);
      return 0;
}
