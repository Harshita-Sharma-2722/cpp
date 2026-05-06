#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a no= ";
    cin>>num;
    if(num ==0 || num==1){
        cout<<"not prime";
    }
    else{
        for(int i=2;i<num;i++){
        if(num%i!=0){
            cout<<"prime";
        }
        }
            if(num%2==0){
                cout<<"not prime";
            }
        
    }
    
    return 0;
}