//Program to find maximum and minimum numbers from provided numbers
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the entries of arrays"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int maxi=INT16_MIN;
    int mini=INT16_MAX;

    for(int i=0; i<size; i++)
    {
        maxi=max(arr[i],maxi);
        mini=min(arr[i],mini);
    }
    cout<<"The maximum entry is "<<maxi<<endl;
    cout<<"The minimum entry is "<<mini<<endl;
}