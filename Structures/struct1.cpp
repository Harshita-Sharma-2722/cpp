#include<iostream>
#include<string>
using namespace std;
int main()
{
    struct{
    string name;
    int age;
    float gpa;
    } student;
 // assign value
student.name="harshita";
student.age=20;
student.gpa=8.49;
//print
cout<<student.name<<endl;
cout<<student.age<<endl;
cout<<student.gpa<<endl;
 return 0;
}