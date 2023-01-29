//Program of selection sort i.e swapping smallest number by first element in list
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the entries of array."<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"The sorted array is ";
    for(int i=0; i<n; i++)
    {
       cout<<arr[i]<<" ";
    }
}