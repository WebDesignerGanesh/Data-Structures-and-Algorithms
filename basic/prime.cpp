#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i == 0)
        flag =1;
        break;
    }
    if(flag == 0 )
    {
    cout<<"Is Prime Number ";
    }
    else
    cout<<" Is Not Prime Number ";
    return 0;
}