//Finding prime numbers using function
#include<iostream>
using namespace std;

int prime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout<<"Enter the two numbers."<<endl;
    int a,b;
    cin>>a>>b;
    for(int i=a+1; i<b; i++)
    {
        if(prime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}