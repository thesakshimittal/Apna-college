//program to check number if prime or not using FLAG and MATH.H
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    cout<<"Enter the number you wanna check if prime or not."<<endl;
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<<"Non-prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Prime"<<endl;
    }
}