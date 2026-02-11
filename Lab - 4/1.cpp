#include<iostream>
using namespace std;
class Samp{
  private :
    int i;
  public :
    Samp(int a){
      i=a ;
    }
    
    int get_i(){
			return i ;
    }
};

int sqr_it(Samp &ob1, Samp &ob2){
    int sum=ob1.get_i()+ob2.get_i();
    return sum*sum;
}

int main(){
    int a, b;
    cout<<"Enter the value of i for S1 and S2 :";
    cin>>a>>b;

    Samp S1(a), S2(b);
    cout<<"Square of the sum : "<<sqr_it(S1, S2)<<endl;

    return 0;
}
