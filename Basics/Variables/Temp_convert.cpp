#include<iostream>
using namespace std;
int main()
{
    double celsius,Fahrenheit,Kelvin;
    cout<<"enter temp in celsius= ";
    cin>>celsius;
    Fahrenheit = (celsius * 9/5) + 32;
    Kelvin = celsius + 273.15;
    cout<<"temp in Fahrenheit= "<<Fahrenheit<<endl;
    cout<<"temp in Kelvin= "<<Kelvin<<endl;
    return 0;
}