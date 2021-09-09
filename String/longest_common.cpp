#include<bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        int T[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                  T[i][j]=0;
                else
                {
                    if(text1[i-1]==text2[j-1])
                    {
                    T[i][j]= T[i-1][j-1]+1;
                    }
                    else
                    {
                    T[i][j]=max(T[i-1][j],T[i][j-1]);
            }}
            }
        }
        return T[m][n];
    }
int main()
{
    string text1;
    cin>>text1;
    string text2;
    cin>>text2;
    cout<<longestCommonSubsequence(text1,text2);
    return 0;
}    