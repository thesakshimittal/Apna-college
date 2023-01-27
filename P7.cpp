//Sum of first n natural numbers
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number till which you want sum."<<endl;
    int n;
    cin>>n;
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of natural numbers till "<<n<<" is "<<sum<<endl;
    return 0;
}