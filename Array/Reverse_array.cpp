#include<bits/stdc++.h>
using namespace std;
void rever(int arr[],int start,int size)
{
    while(start < size)
    {
        int temp = arr[start];
        arr[start] = arr[size];
        arr[size] = temp;
        start++;
        size--; 
        
    }
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
      cout<<arr[i];
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    rever(arr,0,size-1);
    print(arr,size);
    return 0;
}