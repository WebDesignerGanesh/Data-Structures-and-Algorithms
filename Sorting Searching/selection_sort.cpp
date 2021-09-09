#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int n)               //in this sort we find smallest element first
{
    for(int i=0;i<n-1;i++)
    {
        int mini = i;                      //considering i as minimum element
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[mini])         //comparing mini with other array elements and replacing it with 
            mini = j;                      //smallest element in array
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;

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
    selection(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];                  //time complexity O(n^2)
    }
    return 0;

}