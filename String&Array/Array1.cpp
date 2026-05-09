#include<iostream>
using namespace std;
int main()
{
    int array[5];
    int sum=0;
    float average;
    cout<<"enter 5 integers= ";
    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    } 
    cout<<"print all elements= ";
     for(int i=0;i<5;i++)
    {
        cout<<array[i];
        sum=sum+array[i];
    }
    average=sum/5;
    cout<<endl;
     cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
   
    return 0;
}