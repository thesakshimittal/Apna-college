//To check if the given number is prime or not
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number you wanna check."<<endl;
    int n;
    cin>>n;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"Non-Prime"<<endl;
            break;
        }
        else
        {
            cout<<"Prime"<<endl;
            break;
        }
    }
    if(n==2)
    {
        cout<<"Prime"<<endl;
    }
    if(n==1)
    {
        cout<<"Neither Prime nor Non prime."<<endl;
    }
    if(n<=0)
    {
        cout<<"Neither Prime nor Non prime."<<endl;
    }

    return 0;
}