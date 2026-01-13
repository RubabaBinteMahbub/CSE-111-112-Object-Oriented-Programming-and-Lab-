#include<iostream>
#include<string>
using namespace std;
class Bank{
private :
double accNo,balance;
public :
string AccHolderName,BankName;
void setValues(string bn, double no, string hn, double b){
accNo=no;
balance=b;
AccHolderName=hn;
BankName=bn;
}
void deposit(double amount){
    //amount parameter নিচ্ছে কারণ এটা attribute না।
    if(amount>0){
    balance=balance+amount;
    cout<<"Amount deposited successfully."<<endl;
    }
    else{
    cout<<"Invalid deposit amount."<<endl;
    }
}
void withdraw(double amount){
   if(balance>0){
    balance=balance-amount;
    cout<<"Amount withdrawn successfully."<<endl;
    }
    else{
    cout<<"Insufficient balance."<<endl;
    }
}
double getBalance(){
return balance;
}
void DisplayAccDetails(){
cout<<"Bank Name : "<<BankName<<endl;
cout<<"Account holder name : "<<AccHolderName<<endl;
cout<<"Account No. : "<<accNo<<endl;
cout<<"Balance : "<<balance<<endl;
}
};
int main(){
Bank c1;
c1.setValues("ABC Bank",115,"Abir Hossain",2000);
c1.DisplayAccDetails();
c1.deposit(1000);
c1.withdraw(500);
cout<<"Current Balance = "<<c1.getBalance()<<endl;
return 0;
}
