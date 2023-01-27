//Write the number of which table you want upto 10
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter whichever table you want."<<endl;
    cin>>n;
    for(int i=1; i<=10; i++ )
    {
        cout<<n*i<<endl;
    }
    return 0;
}