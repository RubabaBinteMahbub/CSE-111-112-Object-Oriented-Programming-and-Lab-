#include<iostream>
using namespace std;
class Sample{
   private :
     string s;
   public :
     Sample(string a){
       s=a;
     }

      string get_s(){
  			return s;
      }
};

string add_string(Sample &ob1, Sample &ob2){
    return ob1.get_s()+" "+ob2.get_s();
}

int main(){
    string w1, w2;

    cout<<"Enter the 1st string : ";
    cin>>w1;
		cout<<"Enter the 2nd string : ";
    cin>>w2;

    Sample S1(w1), S2(w2);
    cout<<"Strings after adding together : "<<add_string(S1, S2)<<endl;

    return 0;
}
