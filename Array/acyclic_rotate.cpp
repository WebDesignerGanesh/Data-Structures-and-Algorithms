#include<bits/stdc++.h>
using namespace std;
void acyclic_rotate(int arr[],int n)
{
    int temp = arr[0];
    for(int i=0;i<n;i++)
    arr[i]= arr[i+1];
    arr[n-1] =temp;
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
    acyclic_rotate(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}