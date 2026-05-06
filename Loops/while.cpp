#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter a number= "<<endl;
    cin>>n;
    while(n!=0){
        sum=sum+n;
        cin>>n;// update n everytime the loop run
    }
    cout<<"sum of entered number= "<<sum;
    return 0;
}