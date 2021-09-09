#include<bits/stdc++.h>
using namespace std;
int stairs(int n)
{
    if(n<=2)
    return n;
    int a=1;
    int b=2;
    int c;
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    
    }
    return c;

}
int main()
{
    int n;
    cin>>n;
    cout<<stairs(n);
    return 0;
}