//Program to print Pascal triangle i.e binomial coefficients
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    return num/denom;
}

int main()
{
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<nCr(i-1,j-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}