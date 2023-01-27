//To check if the given alphabet if consonant or vowel
#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter your character."<<endl;
    cin>>c;
    int Lvowel,Uvowel;
    Lvowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    Uvowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(Lvowel||Uvowel)
    {
        cout<<c<<" is Vowel"<<endl;
    }
    else
    {
        cout<<c<<" is Consonent"<<endl;
    }


    return 0;
}