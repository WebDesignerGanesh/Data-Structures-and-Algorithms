#include<bits/stdc++.h>
using namespace std;
int trap(int arr[],int n)
{
    if(n<=2)
    return 0;
    int maxleft = arr[0];
    int maxright = arr[n-1];
    int left = 1;
    int right = n-2;
    int trapwater =0;
    while(left<=right)
    {
        if(maxleft<maxright)
        {
          if(arr[left]>=maxleft)
          maxleft = arr[left];
          else
          trapwater += maxleft-arr[left];
          left++;
        }
        else
        {
            if(arr[right]>maxright)
            maxright = arr[right];
            else
            trapwater += maxright-arr[right];
            right--;

        }
    }
    return trapwater;
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
    cout<<trap(arr,n);
    return 0;
}