//Continue means skip to the next iteration of the loop.
//Break statement is used to terminate.
// Program to skip the multiples of 3 in counting from 1 to 100
#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=100; i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}