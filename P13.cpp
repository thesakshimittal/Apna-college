//Program to print all prime numbers between given two numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the two numbers."<<endl;
    cin>>a>>b;
    for(int num=a; num<=b; num++)
    {
        int i;
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(num==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}