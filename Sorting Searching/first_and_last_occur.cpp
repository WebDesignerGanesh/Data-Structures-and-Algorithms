#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int n,int x)
{
    int low=0;
    int high =n-1;
    int result =-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == x)
        {
            result = mid;
            high = mid-1;
        }
        else if(arr[mid] < x)
        {
             low = mid+1;
        }
        else
        {
             high = mid-1;
        }
    }
    return result;
}
int last(int arr[], int n,int x)
{
    int low=0;
    int high =n-1;
    int result =-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == x)
        {
            result = mid;
            low = mid+1;
        }
        else if(arr[mid] < x)
        {
             low = mid+1;
        }
        else
        {
             high = mid-1;
        }
    }
    return result; 
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
    int x;
    cin>>x;
    cout<<"First "<<first(arr,n,x);
    cout<<"Last "<<last(arr,n,x);
    return 0;
}    