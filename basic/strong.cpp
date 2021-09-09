#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fact =1;
    int temp=n;
    int sum=0;
    while(n>0)
    {
    int rem = n%10;
    for(int i=1;i<=rem;i++)
    {
        fact = fact*i;
    }
    sum += fact;
    n=n/10;
    }
    if(sum==temp)
    {
        cout<<sum<<" Number is strong";
    }
    else
    {
    cout<<sum<<" Number is not strong";
    }
    return 0;
}