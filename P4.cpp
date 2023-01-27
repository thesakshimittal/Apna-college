//Finding maximum out of three numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter your three numbers in the form a b c."<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<a<< " is the lasgest number."<<endl;
    }
    else if(b>a&&b>c)
    {
        cout<<b<< " is the lasgest number."<<endl;
    }
    else{
        cout<<c<<" is the largest number."<<endl;
    }
    return 0;
}