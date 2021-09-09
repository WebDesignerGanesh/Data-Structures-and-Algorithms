#include<bits/stdc++.h>
using namespace std;
int maxProfit(int prices[],int n) {
        int minimum = INT_MAX;
        int profit = 0;
        for(int i=0;i<n;i++)
        {
            minimum = min(minimum , prices[i]);
            profit = max(profit, prices[i]-minimum);
        }
        return profit;
    }
int main()
{
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }
    cout<<maxProfit(prices,n);
    return 0;
}