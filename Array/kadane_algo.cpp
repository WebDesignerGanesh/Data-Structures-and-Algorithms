#include<bits/stdc++.h>
using namespace std;
int largest_sum(int arr[],int n)
{
    int maximum_ends_here = 0;
    int maximum_so_far = INT_MIN;                //INT_MIN so that it contain both -ve & +ve values
    for(int i=0;i<n;i++)
    {
        maximum_ends_here = maximum_ends_here + arr[i];
        if(maximum_ends_here < arr[i])
        {
        maximum_ends_here = arr[i];
        }
        if(maximum_so_far < maximum_ends_here)
        {
            maximum_so_far = maximum_ends_here;
        }
    }
    return maximum_so_far;
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
    cout<<largest_sum(arr,n);
}