#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name=" I am leaning C++ ";
    name.find("C++");
    name.replace(name.find("C++"),3,"Cpp"); // 3 means remove 3 character
    cout<<"output= "<<name;

    return 0;
}