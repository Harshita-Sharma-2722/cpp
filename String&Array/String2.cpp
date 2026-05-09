#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first ;
    cout<<"first string= ";
    cin>>first;
    string second;
    cout<<"second string= ";
    cin>>second;
    //concatenated
    cout<<first +  second<<endl;
    // compare
    if(first==second){
        cout<<"equal";
    }
    else
    cout<<"not equal";
    //which is longer
    if(first.length()>second.length()){
    cout<<"first string is longer";
    }
    else if(second.length()>first.length()){
        cout<<"second string is longer";
    }
    else
    cout<<"both string are equal";
    return 0;
}