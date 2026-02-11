#include<iostream>
#include<string>
using namespace std;
struct Employee{  //By default public না বলে দিলে।
  string ID, name ;
  double basicSalary, DA, HRA, grossSalary;

  Employee(string id, string n, double bS, double da, double hra){
     ID=id;
     name=n;
     basicSalary=bS;
     DA=da;
     HRA=hra;
     grossSalary=basicSalary+DA+HRA;
  }

  void display(){
     cout<<"\n----Employee Details----\n";
     cout<<"ID : "<<ID<<endl;
     cout<<"Name : "<<name<<endl;
     cout<<"Basic salary : "<<basicSalary<<endl;
     cout<<"DA : "<<DA<<endl;
     cout<<"HRA : "<<HRA<<endl;
     cout<<"Gross salary : "<<grossSalary<<endl;
  }
};

int main(){
      Employee E1("35633", "Shamima", 10000, 5000, 5000);
      E1.display();
      return 0;
}
