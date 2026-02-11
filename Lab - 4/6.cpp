#include<iostream>
#include<string>
using namespace std;
struct Student{
  string name;
  int roll;
  int marks[3];

  Student(string n, int r, int m[]){
    name=n;
    roll=r;
    for(int i=0; i<3; i++){
    marks[i]=m[i]; // Array direct assign করা যায় না (marks = m )। ভেক্টর করা যায়।
    }
  }

   void display(){
        int sum=0;
     
        for(int i=0; i<3; i++){
				sum+=marks[i];
        }
     
        cout<<"Average of marks : "<<sum/3.0<<endl;
    }
      
};

int main(){
    string n1;
    int r1, m1[3];
  
    cout<<"Enter name and roll : ";
    cin>>n1>>r1;
    cout<<"Enter marks : ";
    for(int i=0; i<3; i++){
      cin>>m1[i];
    }

    Student S1(n1, r1, m1);
    S1.display();

    return 0;
}
/*
int m1[3]={30, 30,30};
Student S1("Rubaba", 260, m1);
S1.display();
*/
