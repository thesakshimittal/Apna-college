//Program to reverse a number
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number you wanna reverse."<<endl;
    int n;
    cin>>n;
    int reverse = 0;
    while(n>0)
    {
        int lastdigit=n%10;
        reverse= reverse*10 + lastdigit;
        n=n/10; 
    }
    cout<<reverse;
}