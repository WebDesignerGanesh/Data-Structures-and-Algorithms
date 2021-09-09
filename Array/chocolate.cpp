#include<bits/stdc++.h>
using namespace std;
int chocolate(int arr[],int n,int m)
{
    sort(arr,arr+n);
    int min = INT_MAX;
    for(int i=0;i+m-1<n;i++)
    {
        int d = arr[i+m-1]-arr[i];
        if(d<min)
        min = d;
    }
    return min;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<chocolate(arr,n,m);
    return 0;
}