//Program to compare two strings
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="abc";
    string s2="xyz";
    if(s2.compare(s1)==0)
    {
        cout<<"Strings are equal"<<endl;
    }
    else
    {
        cout<<"Strings are not equal"<<endl;
    }

    string s3="abcdefghijklmniopqrstuvxyz";
    s3.clear();  // to clear the string

    if(s3.empty())  // to check whether string is empty or not
    {
        cout<<"String is empty"<<endl;
    }

    string s4="nincompoop";
    cout<<s4<<endl;
    s4.erase(3, 5);   //to delete particular letters from a word str.erase(indea, no. of letters to be deleted)
    cout<<s4<<endl;
    
    cout<<s4.find("nin")<<endl;  //to find sub-string

    string s5="compo";
    cout<<s4.insert(3, s5)<<endl;    //to insert a particular string in another string str.insert(index, str2)

    cout<<s5.size()<<endl;  // to check size of a string.......str.length() can also be used

    for(int i=0; i<s4.length(); i++)
    {
        cout<<s4[i]<<endl;
    }

    cout<<s4.substr(4, 5)<<endl;  // to get substring str.substr(index, no. of letters we want)

    return 0;
}