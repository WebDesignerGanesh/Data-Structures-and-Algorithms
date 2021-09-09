#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int temp=n;
    for(int i=1;i<n;i++)
    {
        int rem = n%i;
        if(rem == 0)
        sum += i;
    }
    if(sum>temp)
    cout<<" Abundant number";
    else
    cout<<" Not Abundant number";
    return 0;
}