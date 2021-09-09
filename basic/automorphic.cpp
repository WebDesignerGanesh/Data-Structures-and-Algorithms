#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    int sqr=n*n;
    while(n>0)
    {
        if(n%10!=sqr%10)   // checking remainder
        {
            flag=1;
            break;
        }
        n /= 10;             //adding coeficient
        sqr /= 10;
    }
    if(flag==0)
    cout<<" Number is Automorphic";
    else
    cout<<" Number is not automorphic";


    return 0;
}