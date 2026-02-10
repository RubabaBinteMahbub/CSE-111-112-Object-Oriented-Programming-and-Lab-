#include<iostream>
using namespace std;
int compute(int a, int b){
    if(a>b) return a;
    else return b;
}
int compute(int a, int b, int c){
    if(a<b && a<c) return a;
    else if(b<a && b<c) return b;
    else return c;
}
int compute(int arr[], int size){
      int sum=0;
      for(int i=0; i<size; i++){
          sum+=arr[i];
      }
      return sum/size;
}
int main(){
    int x, y, z;
    cout<<"Enter three numbers : ";
    cin>>x>>y>>z;

    cout<<"Maximum of two number (x, y) : "<<compute(x,y)<<endl;
     
    cout<<"Minimum of three number (x, y, z) : "<<compute(x,y,z)<<endl;

    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int a[size];
    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++){
			cin>>a[i];
    }
    cout<<"Average of the array elements : "<<compute(a, size)<<endl;

    return 0;
}
