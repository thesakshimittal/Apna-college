//Another way to check if the given number is prime or not.
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number you wanna check if prime or not."<<endl;
    int n;
    cin>>n;
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"Non-Prime"<<endl;
            break;
        }

    }
    if(i==n)
    {
        cout<<"Prime"<<endl;
    }
    return 0;
}