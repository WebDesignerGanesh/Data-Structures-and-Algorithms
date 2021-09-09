#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    int sum=0;
    int i=0;
    while(n!=0)
    {
        int rem = n%10;
        n = n/10;
        int digit = rem * pow(2,i);
        sum += digit;
         i++;
    }
    cout<<sum;
    return 0;
}