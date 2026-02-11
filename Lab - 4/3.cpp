#include<iostream>
using namespace std;
class Box{
  public :
    int length, height, width;
    
    Box(int l, int h, int w){
       length=l;
       height=h;
       width=w;
    }

    int volume(){
				return length*height*width;
    }

    void display(){
         cout<<"Length : "<<length<<endl;
         cout<<"Height : "<<height<<endl;
         cout<<"Width : "<<width<<endl;
    }
};

void VolumeByValue(Box &ob){
     cout<<"Volume : "<<ob.volume()<<endl;
}

int main(){
    Box B1(7, 4, 3);
    B1.display();
    VolumeByValue(B1);
    return 0;
}
