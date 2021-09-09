#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        int div = n%i;
        if(div==0)
        sum += i;

    }
    if(temp==sum)
    cout<<sum<<" Number is perfect";
    else
    cout<<sum<< " Number is not perfect";
    return 0;
}