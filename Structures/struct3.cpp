#include<iostream>
#include<iomanip>// ex-setw()
using namespace std;
int main()
{
    struct person{
        string name;
        int age;
        string city;
    } ;
    person p[3];
    for(int i=0;i<3;i++){
        cout<<"enter the name= ";
        cin>>p[i].name;
         cout << "Enter age: ";
        cin >> p[i].age;

        cout << "Enter city: ";
        cin >> p[i].city;
    }
    cout<<left<<setw(10)<<"name"<<setw(10)<<"age"<<setw(10)<<"city"<<endl;
     //setw gives space of 10 characters
      for(int i = 0; i < 3; i++)
    {
        cout << left << setw(10) << p[i].name
             << setw(10) << p[i].age
             << setw(10) << p[i].city << endl;
    }
    return 0;
}