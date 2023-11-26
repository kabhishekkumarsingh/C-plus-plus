
#include <iostream>

using namespace std;

class reverse{
    private:
    int n;
    int rev;
    public:
    void set(int a){
        n=a;
    }
    int getN(){
        
        return n;
    }
    int getRev(){
        return rev;
    }
    int calculateRev(){
        int x=0,m=n;
        while(m>0){
           int r=m%10;
          x=x*10+r;
          m=m/10;
        }
        rev=x;
        return 0;
        
    }
  
};

int main()
{
    reverse r;
    int a;
    cout<<"Enter a number to find their reverse:";
    cin>>a;
    r.set(a);
    r.calculateRev();
    cout<<"reverse of "<<r.getN()<<" is "<<r.getRev();
    return 0;
}
