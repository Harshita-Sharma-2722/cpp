// with do/while loop
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string pass;
    int attempt=0;
    do{
    cout<<"enter a password= ";
    cin>>pass;
    attempt++;
    }while(pass!="cpp123");
    cout<<"correct password"<<endl;
    cout<<"attempt taken= "<<attempt;
    return 0;
}

//with while loop
#include <iostream>
using namespace std;

int main() {
    string password = "";
    int attempts = 0;

    while(password != "cpp123") {
        cout << "Enter password: ";
        cin >> password;

        attempts++;
    }

    cout << "Correct password!" << endl;
    cout << "Attempts taken: " << attempts << endl;

    return 0;
}