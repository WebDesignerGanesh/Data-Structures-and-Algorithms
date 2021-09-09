#include<bits/stdc++.h>
using namespace std;
void co(int n,string str[])
{
    if(n==0)
    return;
    co(n/10,str);
    cout<<str[n%10]<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    co(n,str);
    return 0;
}