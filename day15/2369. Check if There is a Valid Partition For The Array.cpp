#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool solve(int index , vector<int>& nums ,vector<int>& dp)
    {
        if(index == nums.size())
            return true;
        if(dp[index] != -1) 
            return dp[index];
        if(index + 1 < nums.size() && nums[index] == nums[index+1])
        {
            if( solve(index+2 , nums , dp) )
                return true;
            if(index + 2 < nums.size() && nums[index] == nums[index+2])
                if(solve(index+3  , nums , dp))
                    return true;
        }

        if(index + 2 < nums.size() && nums[index+1] -1 == nums[index]   && nums[index]==nums[index+2]-2)
            if(solve(index+3 , nums , dp))
                return true;
        
        return dp[index] = false;
    }

    bool validPartition(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(0 , nums , dp );    
    }
};