//Program to create a calculator
#include<iostream>
using namespace std;

int main()
{
    cout<<"Input two numbers."<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"Input an operator."<<endl;
    char op;
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"Enter any other operator."<<endl;
        break;
    }


    return 0;
}