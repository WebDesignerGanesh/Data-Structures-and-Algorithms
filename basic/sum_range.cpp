#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=n;i<=m;i++)
    {
       sum += i;
    }
    cout<<sum;
    return 0;
}