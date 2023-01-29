//Pssing by reference
//There is already a built function of swap so we have used the word slip instead of swap 
#include<iostream>
using namespace std;

void slip(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a = 5;
    int b = 10;
    
    slip(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}