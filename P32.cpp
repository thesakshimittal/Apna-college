//String to integer or integer to string
#include<iostream>
#include<string>
#include<algorithm>   // to use sort function
using namespace std;

int main()
{
    string s="786";
    int a = stoi(s);
    cout<<a+5<<endl;

    int b = 78;
    string s2= to_string(b);
    cout<<s2+"6"<<endl;

    string s3="ajhwjhalwrwoejoreg";
    sort(s3.begin(),s3.end());
    cout<<s3<<endl;

    }