#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=n;i>0;i--)
    {
       sum += n%10;     //gives us remainder and add it with sum
       n=n/10;          //gives us coificient
    }
    cout<<sum;
    return 0;
}