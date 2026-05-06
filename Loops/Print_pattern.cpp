#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++){ // for rows
        for(int j=1;j<=i;j++){ //for column/stars(how many stars to print in that row)
          cout<<"*";
        }
        cout<<endl;


    }
    return 0;
}