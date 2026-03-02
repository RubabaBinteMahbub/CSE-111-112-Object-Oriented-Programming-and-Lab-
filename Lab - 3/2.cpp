#include<bits/stdc++.h>
using namespace std;
class BankAccount{
private:
    double accNumber, balance;
public:
    BankAccount(double accNo, double b){
    accNumber=accNo;
    baalance=b;
    }

    void display(){
    cout<<"account number : "<<accNumber<<endl;
    cout<<"balance : "<<balance<<endl;
    }

    ~BankAccount(){
    cout<<"The account is closed."<<endl;
    }
};
int main(){
    BankAccount b1(24353, 15000);
    b1.display();
    return 0;
}
