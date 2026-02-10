#include<iostream>
using namespace std;
class Sum{
   public :
      int a;
   Sum add(Sum sa, Sum sb){
      Sum sc;
      sc.a = sa.a + sb.a;
      return sc ;
   }
};

int main(){
Sum s1, s2, s3 ;

s1.a = 50;
s2.a = 100;
s3.a = 0;

cout<<"Value of object 1: "<<s1.a<<" , \n object 2: "<<s2.a<<" ,\n object 3 : "<<s3.a<<endl;

s3 = s3.add(s1, s2); //s3. দিতেই হবে কারণ add একটা member function। Object ছাড়া কাজ করবে না। non class member হলে direct লিখা যেতো s3=add(s1, s2)। অর্থাৎ return করা নতুন object কে s3 তে assign কর।
cout<<"Value of a : "<<s3.a<<endl;
  
return 0;
}
