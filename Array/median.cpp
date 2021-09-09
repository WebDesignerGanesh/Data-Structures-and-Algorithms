#include<bits/stdc++.h>
using namespace std;
int median(int arr[],int n)
{
    sort(arr,arr+n);
    int ans;
    if(n & 1)
    {
        ans  = arr[n/2];
    }
    else
    {
        ans = (arr[n/2] + arr[n/2-1])/2;
    }
    return ans;
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
    cout<<median(arr,n);
    return 0;
}