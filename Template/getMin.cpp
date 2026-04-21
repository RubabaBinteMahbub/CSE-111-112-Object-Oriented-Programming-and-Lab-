#include<bits/stdc++.h>
using namespace std;

template<typename T>
T getMin(T a, T b){
  if(a<b) return b;
}

int main(){
cout<<getMin(5,2)<<endl;
return 0;
}
