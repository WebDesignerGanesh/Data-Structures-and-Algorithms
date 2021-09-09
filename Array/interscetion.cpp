#include<bits/stdc++.h>
using namespace std;
int union1(int a[],int n,int b[],int m)
{
    unordered_set<int> s;
    int count =0;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        int key = b[i];
        if(s.find(key) != s.end())
        {
            count ++;
            s.erase(key);
        }
    }
    return count;
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