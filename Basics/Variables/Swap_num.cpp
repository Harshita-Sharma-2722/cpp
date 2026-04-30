#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter integers= ";
    cin>>a>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"after swapping"<<endl;
    cout<<"a= "<<a<<" b= "<<b<<endl;
    return 0;
}