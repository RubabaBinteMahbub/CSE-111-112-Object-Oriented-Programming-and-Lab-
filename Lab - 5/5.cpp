#include<iostream>
using namespace std;
class TaxCalculator{
  public :
    double calculateTax(int income){
           return income*(15.0/100); // ভাগের ক্ষেত্রে result, float এ চাইলে হর বা লব যেকোনো একটার সাথে অবশ্যই .0 দিতে হবে।
    }
         
		double calculateTax(int income, int taxRate){
           return income*(taxRate/100.0);
    }
};
int main(){
     TaxCalculator C1, C2;

     cout<<"Default tax = "<<C1.calculateTax(10000)<<endl;

     cout<<"Custom tax = "<<C2.calculateTax(10000, 15)<<endl;

     return 0;
}
