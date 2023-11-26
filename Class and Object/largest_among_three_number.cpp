#include <iostream>

using namespace std;

class largest{
    private:
    int a;
    int b;
    int c;
    int large;
    public:
    void set(int x,int y,int z){
      a=x;
      b=y;
      c=z;
    }
    void get()
    {
        cout<<"largest value in "<<a<<","<<b<<" and"<<c<<" is "<<large;
    }
    void calculate_large(){
        if(a>b && a>c){
        large= a;
        
        }
        else if(b>a && b>c)
        {
        large= b;
        
        }
        else
        {
        large= c;
        
        }
    }
};

int main()
{
largest l;
int a,b,c;
cout<<"Enter three number to find larget among them:";
cin>>a>>b>>c;
l.set(a,b,c);
l.calculate_large();
l.get();
    return 0;
}
