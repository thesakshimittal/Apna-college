//Program to find index of entry using binary search
//Time complexity of binarysearch = O(log base 2 of n)
#include<iostream>
using namespace std;

int binarysearch(int n, int arr[], int key )
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the entries of array."<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key."<<endl;
    int key;
    cin>>key;
    cout<<"The index of the key is "<<binarysearch(n,arr,key);
} 
