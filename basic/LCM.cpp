#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int i;
    for(i=a>b?a:b;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        break;
    }
    cout<<i;
    return 0;
}