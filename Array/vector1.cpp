#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>v{{1,2,3},{5,6,7}};
    int sum=0;
    int result=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
        sum += v[i][j];
        }
        result = max(sum,result);
        sum=0;
    }
    cout<<result;
    return 0;
}