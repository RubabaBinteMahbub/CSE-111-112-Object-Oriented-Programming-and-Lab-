#include<iostream>
#include<string>
using namespace std;

class Varsity;

class Department{
  public:
     void print(Varsity &ob);
};

class Varsity{
   private :
     string name;
   protected :
     string location;
   public :
     Varsity(){
        name = "DU";
        location = "Dhaka";
     }
    
     friend void Department :: print (Varsity &ob);
};

     void Department :: print(Varsity &ob){
     cout<<"Name of varsity : "<<ob.name<<endl;
     cout<<"Location of the varsity : "<<ob.location<<endl;
     }

int main(){
    Varsity v1;
    Department d1;
    d1.print(v1);
    return 0;
}
// কোনো member বা non-member অর্থাৎ global function কে কোনো class এর friend বানালে সেই ফাংশনটা থেকে ওই class এর private ও protected attribute কে শুধু ডট অপারেটর দিয়েই access করা যাবে (অন্য public attribute গুলোর মতো)।
// অন্য কোনো ক্লাসের member function কে friend বানাতে হলে Scope resolution দিয়ে সেই ক্লাসের নামটাও লিখতে হবে।
// তবে যে class এর member function কে friend বানাবো তাকে ওপরে আগে declare করে আসতে হবে (forward declaration)। নাহলে যার friend বানাবো সে friend এর class কে চিনবে না।
