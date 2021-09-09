#include<bits/stdc++.h>
using namespace std;
void find_min(int arr[],int n)
{
    int current_min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(current_min > arr[i])
        current_min = arr[i];
    }
    cout<<"Min Element = "<<current_min;
}
void find_max(int arr[],int n)
{
    int current_max= arr[0];
    for(int i=0;i<n;i++)
    {
        if(current_max < arr[i])
        current_max = arr[i];
    }
    cout<<" Max Element = "<<current_max;
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
    find_min(arr,n);
    find_max(arr,n);
    return 0;
}