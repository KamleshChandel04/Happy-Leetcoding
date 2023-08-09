#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool solve(vector<int> &nums , int &mid , int &p)
    {
        int count = 0;
        for(int i=1 ;i<nums.size() ; i++)
        {
            if(nums[i] - nums[i-1] <= mid)
            {
                i++;
                count++;
            }
        }
        return count >= p;
    }

    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin() , nums.end());
        int start = 0;
        int end = nums.back();
        int ans = 0;

        while(start<=end)
        {
            int mid = start + (end - start)/2;

            if(solve(nums , mid , p))
            {
                ans = mid;
                end = mid -1;
            }
            else
                start = mid +1;
        }
        return ans;
    }
};