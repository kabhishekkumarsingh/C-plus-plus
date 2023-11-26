#include <iostream>

using namespace std;

class tim{
    private:
    int h;
    int m;
    int s;
    public:
    void set(int a,int b,int c){
        h=a;
        m=b;
        s=c;
    }
    void get()
    {
        cout<<h<<":"<<m<<":"<<s;
    }
};

int main()
{
tim t;
t.set(3,52,44);
t.get();
    return 0;
}
