#include<iostream>
using namespace std;

class Distance{
public:
int feet, inch;

Distance(int f=0, int i=0){
feet=f;
inch=i;
}

void operator-(){
feet--;
inch--;
cout<<"\nFeet and inches decrement : "<<feet<<" "<<inch<<endl;
}
};

int main()
{
Distance d1(8, 9);
-d1;
return 0;
}
