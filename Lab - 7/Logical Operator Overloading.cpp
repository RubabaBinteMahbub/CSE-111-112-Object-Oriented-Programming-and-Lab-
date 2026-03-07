#include<bits/stdc++.h>
using namespace std;
class Coord{
public:
int x,y;

Coord(int a=0, int b=0){
x=a;
y=b;
}

bool operator==(Coord &ob2){
return x==ob2.x && y==ob2.y;
}

bool operator&&(Coord &ob2){
return (x && ob2.x) && (y && ob2.y);
}
/*x && ob2.x 
এখানে check হচ্ছে:
x কি non-zero? (yes হলে return 1)
ob2.x কি non-zero? (yes হলে return 1)
যদি দুইটাই non-zero হয় → true(1 and 1=1)
*/
};
int main(){
Coord o1(10, 10), o2(5, 3), o3(10, 10), o4(0, 0);

if(o1==o2)
cout<<"o1 same as o2\n";
else
cout<<"o1 and o2 differs\n"; //√

if(o1==o3)
cout<<"o1 same as o3\n"; //√
else
cout<<"o1 and o3 differs\n";

if(o1&&o2)
cout<<"o1 && o2 is true\n"; //√
else
cout<<"o1 && o2 is false\n";

if(o1&&o4)
cout<<"o1 && o4 is true\n";
else
cout<<"o1 && o4 is false\n"; //√

return 0;
}
