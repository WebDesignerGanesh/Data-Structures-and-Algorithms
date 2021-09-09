#include<bits/stdc++.h>
using namespace std;
void move(int arr[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)                     //for moving right make it "arr[i]>0"
        {
        j++;
        swap(arr[i],arr[j]);
        }
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
    move(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}