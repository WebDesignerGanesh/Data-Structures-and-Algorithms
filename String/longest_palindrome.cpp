#include<bits/stdc++.h>
using namespace std;

 int longestCommonSubsequence(string s1, string s2, int n) {
		// s1 is the reverse of string s and s2 is the given string itself
		//findout the longest common subsequence the dp[n][n] will be storing the  count of longest palindromic subsequence
      
        int dp[n+1][n+1]; 
         
        for(int i=0; i<=n; i++) { 
           for(int j=0; j<=n; j++){
               
              if(i==0 or j==0){
                 dp[i][j]=0;
                }
              else if(s1[i-1]==s2[j-1]){
                 dp[i][j]=1+dp[i-1][j-1];
                }else{
                  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                  }
            }
       }
    return dp[n][n]; 
  }
    
    int longestPalindromeSubseq(string s) 
    {
        int n = s.size();
        string s1 = s;
        reverse(s.begin(), s.end());
        string s2 = s;
        return longestCommonSubsequence(s1, s2, n);
        
    }
int main()
{
    string s;
    cin>>s;
    cout<<longestPalindromeSubseq(s);
    return 0;
}