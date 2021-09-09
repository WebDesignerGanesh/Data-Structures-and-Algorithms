#include<bits/stdc++.h>
using namespace std;
int HCF(int a,int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    if(a==b)
    return a;
    else if(a>b)
    {
        return HCF(a-b,b);
    }
    return HCF(a,b-a);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<HCF(a,b);
    return 0;
}