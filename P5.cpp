// Program to check if the given triangle is isosceles, scalene or equilateral
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the three sides of the triangle."<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&b==c)
    {
        cout<<"The given triangle is equilateral."<<endl;
    }
    else if(a!=b&&b!=c)
    {
         cout<<"The given triangle is scalene."<<endl;
    }
    else{
         cout<<"The given triangle is isosceles."<<endl;
    }
    return 0;
}