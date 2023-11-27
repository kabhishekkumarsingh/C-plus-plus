#include <iostream>

using namespace std;
class Area{
    
    float side;
    float length,breath,radius;
  
  public:
  void setside(float a){
      side=a;
  }
  void setlengthbreath(float a,float b){
      length =a;
      breath=b;
  }
  void setradius(float a){
      radius=a;
  }
  float areaofsquare(){
      return side*side;
  }
  float areaofRectangle(){
     return length*breath; 
  }
  float areaofcircle(){
      return 3.14*radius*radius;
  }
};


int main()
{
Area a;
a.setside(5);
a.setlengthbreath(3,5);
a.setradius(7);
cout<<"area of circle"<<a.areaofcircle()<<endl;
cout<<"area of square"<<a.areaofsquare()<<endl;
cout<<"are of ractangle"<<a.areaofRectangle();
    return 0;
}
