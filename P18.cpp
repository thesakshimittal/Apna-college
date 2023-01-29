//Program to find nCr
#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(n-r)*factorial(r);
    return num/denom;
}
int main()
{
    cout<<"Enter the number whose factorial you want."<<endl;
    int a,b;
    cin>>a>>b;
    cout<<nCr(a,b)<<endl;
    return 0;
}