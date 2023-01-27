//* * * * * 
//* * * * *
//* * * * *
//* * * * *
//* * * * * 
//* * * * *
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of rows."<<endl;
    int rows;
    cin>>rows;
    cout<<"Enter the number of columns."<<endl;
    int columns;
    cin>>columns;
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=columns; j++)
       {
         cout<<"* ";
       }
        cout<<endl;
    }
}