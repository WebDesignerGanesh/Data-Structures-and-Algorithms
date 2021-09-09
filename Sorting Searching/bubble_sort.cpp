#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[], int n)               //in this sort we find largest element first
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)     //here we will not go till "n-1" bcoz at last all elements will already 
        {                            //been sorted so we will go till "n-i-1" location only to save time.
            if(arr[j] > arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            }
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
    bubble(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];               //time complexity O(n^2)
    }
    return 0;

}