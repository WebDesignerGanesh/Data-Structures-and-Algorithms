#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++)   // or we can use formula sum=n*(n+1)/2 without using loop
    {
        sum += i;

    }
    cout<<sum;
    return 0;
}