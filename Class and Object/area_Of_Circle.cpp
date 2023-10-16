#include <iostream>
#define PI 3.14

using namespace std;
class circle{
    private:
    float radius;
    float ar;
    public:

    void getRadius(){
        cout<<"Enter Radius:";
        cin>>radius;
    }
    void area(){
        ar=PI*radius*radius;

    }
    void display(){
        cout<<"Area of circle is "<<ar;
        
    }
};


int main()
{
circle c1;
c1.getRadius();
c1.area();
c1.display();

    return 0;
}
