#include<iostream>
#include<string>
using namespace std;
class Parent{
  protected:
  string name;
};
class Child : public Parent{
  public :
  Child(string n){
  name=n;
  }
  void DisplayInfo(){
  cout<<"Name = "<<name<<endl;
  }
};
int main(){
Child mom("Nusrat Zahan");
mom.DisplayInfo();
return 0;
}
