#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
  cout<<"enter 3 no= ";
  cin>>a>>b>>c;
    int largest=(a>b)?(a>c?a:b):(b>c?b:c);
    cout<<"largest= "<<largest<<endl;
    return 0;
}