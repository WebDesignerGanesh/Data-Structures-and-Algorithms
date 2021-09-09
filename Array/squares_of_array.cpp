#include<bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        vector<int>result(nums.size());
        int i= result.size()-1;
        while(start<=end)
        {
            if(nums[start]*nums[start] > nums[end]*nums[end]){
                result[i] = nums[start]*nums[start];
                start++;
            }
            else{
                result[i] = nums[end]*nums[end];
                end--;
            }
            i--;
        }
        return result;
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums{n};
    sortedSquares(nums);

    return 0;
}