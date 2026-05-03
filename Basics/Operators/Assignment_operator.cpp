#include<iostream>
using namespace std;
int main()
{
    int x=20;
    cout<<"initial value= "<<x<<endl;
    x=4;
    cout<<"(=4): "<<x<<endl;
    x+=4;
    cout<<"(+=4): "<<x<<endl;
    x-=4;
    cout<<"(-=4): "<<x<<endl;
    x*=4;
    cout<<"(*=4): "<<x<<endl;
    x/=4;
    cout<<"(/=4): "<<x<<endl;
    x%=4;
    cout<<"(%=4): "<<x<<endl;
    return 0;
}