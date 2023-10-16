#include <iostream>

using namespace std;
class max1{
    
    private: 
    int a,b;
    public:
    void getValue(){
        cout<<"Enter first number:";
        cin>>a;
        cout<<"Enter second number:";
        cin>>b;
    }
    void checkMax(){
        if(a>b){
            cout<<"max is "<<a;
        }
        else{
            cout<<"max is "<<b;
        }
    }
};

int main()
{
max1 m;
m.getValue();
m.checkMax();
    return 0;
}
