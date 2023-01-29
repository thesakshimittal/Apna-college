//Passing by value
//Same value as local variable will be printed.
#include<iostream>
using namespace std;

void increment(int a)
{
    a++;
}
int main()
{
    int a = 5;
    increment(a);
    cout<<a<<endl;
    return 0;
}