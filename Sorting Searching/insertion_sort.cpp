#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i=1;i<n-1;i++)
    {
        int value = arr[i];
        int hole = i;
        while(hole > 0 && arr[hole-1]>value)
        {
            arr[hole] = arr[hole-1];
            hole = hole-1;
        }
        arr[hole] = value;
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
    insertion(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];                  //time complexity O(n^2)
    }
    return 0;

}