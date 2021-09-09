#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int temp=n;
    while(n>0)
    {
        int rem = n%10;
        sum += rem;
        n = n/10;
    }
    if(temp%sum == 0)
    cout<<" Harshad number";
    else
    cout<<" Not harshad number";
    return 0;
}