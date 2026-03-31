#include<bits/stdc++.h>
using namespace std;

class Distance{
  private:
    int meters;
  public:
    Distance(int m = 0){
    meters = m;
    }

    Distance operator++(){
    ++meters;
    return *this;
    }

    Distance operator--(){
    --meters;
    return *this;
    }

    void Display(){
    cout<<"Display = "<<meters<<endl;
    }
};

int main(){
    Distance d1(5);
    d1.Display();

    ++d1;
    d1.Display();

    --d1;
    d1.Display();
return 0;
}
