#include<bits/stdc++.h>
using namespace std;
int duplicates(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        while(arr[i]!=arr[i+1])
        {
            int element = arr[i];
            if(arr[element-1]!=arr[element])
             swap(arr[element-1],arr[i]);
            else
            return element;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,3,4,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<duplicates(arr,n);
    return 0;
}