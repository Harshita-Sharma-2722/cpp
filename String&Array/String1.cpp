#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"enter a name= ";
    getline(cin,name);
    cout<<"toal no of character= "<<name.length()<<endl;
    cout<<"first 5 character= "<<name.substr(0,5)<<endl;
    cout<<"reversed string= ";
    for(int i=name.length()-1;i>=0;i--){
    cout<<name[i];
    }
    return 0;
}