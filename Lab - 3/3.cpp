#include<bits/stdc++.h>
using namespace std;
class Product{
private:
    string productName;
    double productID, price;
public:
    Product(string n, double pID, double pr){
    productName=n;
    productID=pID;
    price=pr;
    }

    Product(){
    productName="Unnamed";
    productID=0;
    price=0.0;
    }

    void displayDetails(){
    cout<<"Product name : "<<productName<<endl;
    cout<<"Product ID : "<<productID<<endl;
    cout<<"price : "<<price<<endl;
    }

    ~Product(){
    cout<<"The object is destroyed."<<endl;
    }

};
int main(){
    Product p1, p2("Shampoo", 3543, 300);

    p1.displayDetails();
    cout<<endl;

    p2.displayDetails();
    cout<<endl;

    return 0;
}
