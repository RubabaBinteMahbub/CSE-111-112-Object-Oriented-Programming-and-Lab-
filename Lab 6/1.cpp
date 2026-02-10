#include<iostream>
using namespace std;
class BankAccount{
  public :
    double accountNumber, balance;
    
    BankAccount(double accNo, double b){
      accountNumber = accNo;
      balance = b;
    }
    
};

void transfer(BankAccount &A, BankAccount &B, double amount){
// Object always reference হিসেবে pass করতে হয়। নাহলে required change object এ হয়না।
   A.balance-=amount;
   B.balance+=amount;
}

int main(){
    double balA, balB;

    cout<<"Enter the balance of A and B : ";
    cin>>balA>>balB;

    BankAccount A1(123455, balA), A2(764578, balB);
      
    cout<<"Enter the amount : ";
    cin>>amount;
  
    transfer(A1, A2, amount);

    cout<<"Current balance of A1 = "<<
    A1.balance<<endl;
    cout<<"Current balance of A2 = "<<
    A2.balance<<endl;
  
    return 0;
}
