/*
* * * * * 
*       *
*       *
*       *
*       *
*       *
* * * * *
*/
#include<iostream>
using namespace std;

int main()
{
    int rows, columns, spaces;
    cout<<"Enter the number of rows and columns."<<endl;
    cin>>rows>>columns;
    for(int i=1; i<=rows; i++)
    {
        int j;
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows )
            {
                cout<<"*"<<" ";
            }
           else if(j==1||j==columns)
            {
            cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}