#include<iostream>
using namespace std;
int main()
{
    int num;
    int fact=1;
    cout<<"enter a num = ";
    cin>>num;
    if(num<0){
        cout<<"no is negative so does not exist"; 
    }
    int i=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    cout<<"factorial= "<<fact;
    return 0;
}