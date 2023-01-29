//Program to append or join two strings
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="Fam";
    string s2="ily";
    s1.append(s2);
    cout<<s1<<endl; //or we can use cout<<s1+s2<<endl;
    cout<<s1[1]<<endl; //to access any letter of string, consider it to be an array

    string s3="wkwdjekfhde kjddjhfjdbfjs efhdhgejhfjkw jhrehfjhgr ";
    s3.clear();
    cout<<s3<<endl;


    return 0;
}