#include<bits/stdc++.h>
using namespace std;
class Book{
public:
    string title, author, year;

    Book(){
    title="Unknown";
    author="Unknown";
    year="Unknown";
    }

    Book(string t, string a, string y){
    title=t;
    author=a;
    year=y;
    }

    void display(){
    cout<<"title : "<<title<<endl;
    cout<<"author : "<<author<<endl;
    cout<<"year : "<<year<<endl;
    }

    ~Book(){
     cout<<"The object is destroyed."<<endl;
    }
};
int main(){
Book b1, b2("Tin Goeynda", "Rokib Hasan","1986");
b1.display();
b2.display();
return 0;
}
