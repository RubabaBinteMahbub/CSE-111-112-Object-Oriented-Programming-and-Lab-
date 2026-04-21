#include<bits/stdc++.h>
using namespace std;

template<typename T>
T getMax(T arr[],T n){
  T mx=arr[0];

  for(int i=1;i<n;i++){
    if(arr[i]>mx) mx=arr[i];
  }

  return mx;
}

int main(){
int a[]={3,7,2,15};
cout<<getMax(a,4)<<endl;
return 0;
}
