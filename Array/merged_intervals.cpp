#include<bits/stdc++.h>
using namespace std;
vector<int> merged(vector<int> &arr,int n)
{
    vector<int>mergedIntervals;
        if(n == 0)
        {
            return mergedIntervals;
        }
        sort(arr.begin(),arr.end());
        vector<int>temp = arr[0];
        
        for(auto it : arr)
        {
            if(it[0] <= temp[1])
            {
                temp[1] = max(it[1],temp[1]);
            }
            else
            {
                mergedIntervals.push_back(temp);
                temp = it;
            }
        }
        mergedIntervals.push_back(temp);
        return mergedIntervals;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr{n};
    cout<<merged(arr);
    return 0;
}