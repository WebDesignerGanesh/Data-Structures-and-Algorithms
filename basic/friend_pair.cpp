#include<bits/stdc++.h>
using namespace std;
void pair1(int n1,int n2)
{
    int sum1=0;
    for(int i=1;i<=n1-1;i++)
    {
        int rem=n1%i;
        if(rem == 0)
        sum1 += i;
    }
    int sum2=0;
    for(int i=1;i<=n2-1;i++)
    {
        int rem1=n2%i;
        if(rem1 == 0)
        sum2 += i;
    }
    if(n1 == sum2 && n2 == sum1)
    cout<<" Friendly pair";
    else
    cout<<" Not friendly pair"<<sum2<<sum1;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    pair1(n1,n2);
    return 0;
}