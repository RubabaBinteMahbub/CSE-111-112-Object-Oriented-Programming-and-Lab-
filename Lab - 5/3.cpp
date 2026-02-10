#include<iostream>
using namespace std;
class Student{
   private :
			int	marks;
   public :
      Student(int m){
					marks=m;
      }
     
      friend void findTopper(Student &ob1, Student &ob2);
};

void findTopper(Student &ob1, Student &ob2){
     if(ob1.marks>ob2.marks){
 					cout<<"First student in topper."<<endl;
     }
     else{
			cout<<"Second student in topper."<<endl;
     }
}

int main(){
    int m1, m2;

    cout<<"Enter the number of two students : ";
    cin>>m1>>m2;

    Student S1(m1), S2(m2);

    findTopper(S1, S2);
    return 0;
}
