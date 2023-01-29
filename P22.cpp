//Program to find index of entry using linear search
//Time complexity of linearsearch = O(n)
#include<iostream>
using namespace std;

int linearsearch(int size, int arr[], int key)
{
    for(int i=0; i<size; i++)
    {
        if(key==arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout<<"Enter the size of the array. "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the entries of array."<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    cout<<"The index of the array is "<<linearsearch(size, arr, key);
    
}