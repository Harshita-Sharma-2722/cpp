#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"enter 10 integer= ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"reversed order= ";
    for(int i=9;i>=0;i--){
        cout<<arr[i];
        cout<<endl;
    }
    cout<<"even numbers= ";
    for(int i = 0; i < 10; i++)
    {
        if(arr[i]%2==0){
            cout<<arr[i];
        }
    }
    cout<<endl;
    cout<<"odd numbers= ";
    for(int i = 0; i < 10; i++)

    if(arr[i]%2!=0){
        cout<<arr[i];
    }

    return 0;
}