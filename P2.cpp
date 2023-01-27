#include<iostream>
using namespace std;

int main()
{
    int a = 12;
    char b = 'a';
    float c = 13.65;
    double d = 56.22222222222;
    bool e = true;

    cout<<"size of int is "<<sizeof(a)<<endl;
    cout<<"size of char is "<<sizeof(b)<<endl;
    cout<<"size of float is "<<sizeof(c)<<endl;
    cout<<"size of double is "<<sizeof(d)<<endl;
    cout<<"size of bool is "<<sizeof(e)<<endl;

    //Type Modifiers
    /*
    signed  4 Bytes  
    unsigned  4 bytes 
    if we keep the integer unsigned, then its range gets increased
    long  8 Bytes
    short  2 Bytes
    
    */
   short int si;
   long int li;
   cout<<"size of short is "<<sizeof(si)<<endl;
   cout<<"size of long is "<<sizeof(li)<<endl;



    return 0;
}