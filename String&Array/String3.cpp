#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name,nonspace=" ";
    int vowels=0, consonant=0,space=0;
    cout<<"enter a name= ";
    getline(cin,name);
    for(int i = 0; i < name.length(); i++)
{
        char ch = tolower(name[i]);
     if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u' )
   {

       vowels++;
    }
    else if (ch>='a' && ch<='z'){
        
        consonant++;
    }
   else if(ch==' '){
    
    space++;
   }
   if(ch!=' '){
     nonspace =nonspace+ch;
     
   }
}
    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonant << endl;
    cout << "Spaces = " << space << endl;
    cout << "Without spaces = " << nonspace << endl;

    return 0;
}