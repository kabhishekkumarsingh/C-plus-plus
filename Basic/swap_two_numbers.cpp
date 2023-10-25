#include<iostream>
using namespace std;

int main(){
    int a,b,temp=0;
    cout<<"Enter two number to swap: ";
    cin>>a>>b;
    cout<<a<<" "<<b<<" Before swap.\n2";
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<" After swap";
}