#include<bits/stdc++.h>
using namespace std;
int subset(int arr[],int n,int arr1[],int m)
{
    unordered_map<int,int>m1;
    for(int i=0;i<n;i++)
    {
        m1[arr[i]]++;         // value inserted is map
    }
    int c=0;
    for(int i=0;i<m;i++)
    {
        if(m1[arr1[i]])       //simply chceking arr1 value is present in map or not
        {
            c++;              // if present then increasing counter
        }
    }
    if(c != m)
    {
        cout<<"No";
    }
    else{
         cout<<"Yes";
    }
    return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],arr1[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    
    subset(arr,n,arr1,m);
    return 0;
}