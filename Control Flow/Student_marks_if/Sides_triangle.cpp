#include<iostream>
using namespace std;
int main()
{
    int a ,b,c;
    cout<<"enter 3 sides= ";
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<"triangle";
    }
    else if(a==b||b==c||a==c){
        cout<<"isoceles triangle"; // at least two sides are equal
    }
    else if(a==b && b==c){
        cout<<"equilateral triangle"; // all sides are same
    }
    else if(a!=b && b!=c && a!=c){
        cout<<"scalene triangle"; // all sides are different
    }
    return 0;
}