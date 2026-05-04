#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter a year= ";
    cin>>year;
    if(year % 4 == 0){
        cout<<"leap year";
    }
    else if (year%100==0){
        cout<<"not  leap year";
    }
    else if(year%400==0){
        cout<<"is a leap year";
    }
    else
    cout<<"nothing";
    return 0;
}