#include<iostream>
using namespace std;

class Box{
   public :
      int height,width, bredth;
      Box(int h, int w, int b){
					height=h;
					width=w;
					bredth=b;
      }

      int calcVolume(){
          return height*width*bredth;
      }
};

Box assignVolume(Box &ob){
    Box inside;
    inside.calcVolume()= ob.calcVolume();
    return inside;
 }       

int main()
{
Box b1(5,5,5);
  
Box b2=assignVolume(b1);
  
cout<<b1.calcVolume()<<endl;

cout<<assignVolume(b1)<<endl;
  
return 0;
}
