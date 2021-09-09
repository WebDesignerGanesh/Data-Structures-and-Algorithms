#include<bits/stdc++.h>
using namespace std;
int union1(int a[],int n,int b[],int m)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    return s.size();
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<union1(a,n,b,m);
    return 0;
}