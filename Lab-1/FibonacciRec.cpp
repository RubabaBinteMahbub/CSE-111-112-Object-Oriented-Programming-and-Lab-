#include<iostream>
using namespace std;

int fibo(int n){
  if(n==1) return 0;
  else if(n==2) return 1;
  else return fibo(n-1)+fibo(n-2);
}

int main(){
int num;
cout<<"Enter the number : ";
cin>>num;

cout<<num<<"th fibonacci number = "<<fibo(num)<<endl;

cout<<"The fibonacci series = ";
for(int i=1;i<=num;i++){
  cout<<fibo(i)<<" ";
}

cout<<"Sum of the fibonacci series = ";
for(int i=1;i<=num;i++){
sum+=fibo(i);
}
cout<<sum<<endl;
return 0;
}
