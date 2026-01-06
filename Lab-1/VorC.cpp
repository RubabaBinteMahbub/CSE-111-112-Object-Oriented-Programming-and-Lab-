#include<iostream>
#include<cctype>
using namespace std;
int main(){
char ch;
cout<<"Enter the character : ";
cin>>ch;
ch=tolower(ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') cout<<"Vowel"<<endl;
else cout<<"Consonant"<<endl;
return 0;
}
