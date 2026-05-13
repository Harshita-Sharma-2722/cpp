#include<iostream>
using namespace std;
int main()
{
    struct{
        float length;
        float width;
    } rect1,rect2;
    cout<<"enter length and width of rect1= ";
    cin>>rect1.length>>rect1.width;
    cout<<"enter length and width of rect2= ";
    cin>>rect2.length>>rect2.width;
    cout<<"area1= "<<rect1.length*rect1.width<<endl;
    cout<<"area2= "<<rect2.length*rect2.width<<endl;
    cout<<"perimeter1= "<<2 * (rect1.length + rect1.width)<<endl;
    cout<<"perimeter1= "<<2 * (rect2.length + rect2.width)<<endl; 
    return 0;
}