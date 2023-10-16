#include <iostream>

using namespace std;
class outside{
    public:
   void out();
    
};
void outside::out(){
    cout<<"outside function.";
}

int main()
{
outside a;
a.out();
    return 0;
}
